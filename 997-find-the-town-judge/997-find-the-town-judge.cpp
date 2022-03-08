class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector <int> trustcount(n+1,0);

        for(int i=0; i<trust.size();i++){
            trustcount[trust[i][0]]--; //decremnt for trusting
            trustcount[trust[i][1]]++; // increment for gaining trust
        }
        for(int i=1;i<=n;i++){
            if(trustcount[i] == n-1)                                                                                    return i;
        }
        return -1;
    }
};