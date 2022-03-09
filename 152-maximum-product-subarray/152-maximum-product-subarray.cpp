class Solution {
public:
    int maxProduct(vector<int>& nums) {
        /*
        //twice traversal because the traversal is interrupted when it finds -ve number
        
        long long maxprod = INT_MIN, prod=1;
        for(auto x: nums){
            prod = prod* x;
            maxprod = max(maxprod, prod);
            if(prod ==0 )
                prod = 1;
        }
        prod=1;
        for(int i=nums.size()-1 ; i>=0;i--){
            prod = prod* nums[i];
            maxprod = max(maxprod, prod);
            if(prod == 0 )
                prod =1;
        }
        return maxprod;
        */
        
        //Approach 2
        //if it encounters the negative then we swap mini with maxi 
        //because current maxi will become minimum after multiplying with maxi 
        //and vice versa
        int m = nums[0];
        int minn = nums[0];
        int maxx = nums[0];
        
        
         for(int i=1; i<nums.size(); i++){
            if(nums[i]<0){
                swap(minn, maxx);
            }
            maxx = max(nums[i], maxx * nums[i]);
            minn = min(nums[i], minn * nums[i]);
            m = max(m, maxx);
        }
        return m;  
        
    }
    
};