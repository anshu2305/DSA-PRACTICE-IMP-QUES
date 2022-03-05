class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        
        int n=nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int sum = nums[i]+nums[j];
                int rem = target - sum;
                int left = j+1;
                int right = n-1;
                while(left <right){
                    if((nums[left] + nums[right]) > rem)
                        --right;
                    else if((nums[left] + nums[right]) < rem)
                        ++left;
                    else{
                        vector <int> quadr(4,0);
                        quadr[0] = nums[i];
                        quadr[1] = nums[j];
                        quadr[2] = nums[left];
                        quadr[3] = nums[right];
                        ans.push_back(quadr);
                        
                        while(left <right && nums[left]==quadr[2])
                            ++left;
                        while(left <right && nums[right]==quadr[3])
                            --right;
                    }
                }
                
                while(j+1<n && nums[j+1]==nums[j])
                    ++j;
            }
            while(i+1<n && nums[i+1]==nums[i])
                    ++i;
        }
        return ans;
    }
};