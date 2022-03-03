class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        //find the element where a[i-1] > a[i] from the end
        //find the first element smaller than element from the prev found elem
        //swap the two found numbers
        //now reverse all the elements after the secondly scanned number
        
        int i; 
        int ind= -1;
        
        for(i=nums.size()-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                ind = i;
                break;
            }
        }
        
        if(ind == -1){
            reverse(nums.begin(), nums.end());
        }
            
        else{
            for(i=nums.size()-1; i>ind; i--){
                if(nums[ind] < nums[i]){
                    break;
                }
            }
            swap(nums[ind], nums[i]); 
            reverse(nums.begin() + ind +1, nums.end());

        }
    }
};