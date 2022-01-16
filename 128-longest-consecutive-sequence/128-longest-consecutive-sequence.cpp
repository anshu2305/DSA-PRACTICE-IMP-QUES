class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set <int> s(nums.begin(), nums.end());
        int count=0, maxcount=1;
        int n=nums.size(); 
        if(n==0 || n==1)
            return n;
        if(n==2){
            if((nums[0]+1 == nums[1]) || (nums[1]+1 == nums[0]))
                return n;
            else 
                return 1;
        }
        auto it = s.begin();
        it++;
        for(auto x: s){
            if(it==s.end())
                break;
            if(*it == x+1)
                count++;
            else{
                count=0;
            }
            if(maxcount< count+1)
                maxcount= count+1;
            it++;
        }
        int last = *it;
        it--;
        if(*it +1 == last)
            count++;
        if(maxcount<count)
            maxcount=count;  
        return maxcount;
    }
};