class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //using cyclic sort
        
        int slow, fast;
        slow= nums[0];
        fast= nums[0];
        
        do{
            slow = nums[slow]; //moving one at a time
            fast= nums[nums[fast]]; //moving two times at a time
        }
        while(slow!=fast);
        
        fast = nums[0];
        while(slow!=fast){
            slow= nums[slow];
            fast=nums[fast];
            
        }
        return slow;
    }
};