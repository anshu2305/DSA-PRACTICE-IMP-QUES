class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto it= nums.begin();
        int n=nums.size();
        if(n<=1)
            return n;
        for(int i=1;i<n;i++){
            int prev= i-1;
            if(nums[prev]==nums[i]){
                i--;
                n--;
                nums.erase(it);
                it--;
            }
            it++;
        }
        return nums.size();
    }
};