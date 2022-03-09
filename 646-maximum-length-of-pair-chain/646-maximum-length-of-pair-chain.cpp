class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end());
        int n = pairs.size();
        int len[n];
        len[0] = 1; // longest length for only 1 elemnt is 1 
        
        //using two pointers we check for the predecessor of current elemnt 
        //if any pair is smaller then we take its count and check for all the cases with max length
        
        //to check if a pair is smaller... since a,b,c,d are strictly increasing 
        //so, current.first should be greater than preced.second 
        
        for(int i=1; i<n;i++){
            len[i]=1;
            for(int j=0; j<i; j++){
                if(pairs[i][0] > pairs[j][1]){
                    len[i]= max(len[j] + 1 , len[i]);
                }
            }
        }
        //len[i] contains the max length till ith index 
        //so maximum in this array is maximumlength obtained
        
        int res=0;
        for(int i=0;i<n;i++){
            res= max(res, len[i]);
        }
        return res;
    }
};