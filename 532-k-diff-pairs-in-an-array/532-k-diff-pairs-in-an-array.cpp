class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map <int,int> m;
        int count=0;
        if(nums.size()<2)
            return 0;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        
        set <int> s(nums.begin(),nums.end());
        if(k==0){
            for(auto x:s){
                if(m.at(x)%2==0)
                    count += (m[x]/2);
                else if(m.at(x)>1 && m.at(x)%2!=0)
                    count++;
            }
            return count;
        }
        
        for(auto x:s){
            int tar = k+x;
            if(m.count(tar)==1){
                count++; 
            }
        }
        return count;
    }
};