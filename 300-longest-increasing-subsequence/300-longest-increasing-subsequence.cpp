class Solution {
public:
    int ceil_indx(int l, int r, vector <int> tail, int x){
        while(r>l){
            int mid  = l+ (r-l)/2 ; 
            if(tail[mid] >=x ){
                r = mid;
            }
            else {
                l=mid+1;
            }
        }        
        return r;
    }
    
    int lengthOfLIS(vector<int>& nums) {
        vector <int> tail;
        int n= nums.size();
        if(n==0 || n==1) 
            return n;
        
        tail.push_back(nums[0]);
        
        for(int i=1;i<n;i++){
            int tail_size= tail.size();
            
            if(tail[tail_size-1] < nums[i] ){
                //if current elem is bigger than tail simply push it at the end of sequence
                tail.push_back(nums[i]);
            }
            else{
                
                // if the current elem is smaller than tail element of sequence 
                //then find its position in increasing sequence using binary search 
                //and replace the element just greater than current
                int ind= ceil_indx(0, tail_size-1,tail, nums[i]);
                tail[ind] = nums[i];
            }
        }
        return (tail.size());
    }
    
};