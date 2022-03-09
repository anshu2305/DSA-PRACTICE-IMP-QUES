class Solution {
public:
    int maxProduct(vector<int>& nums) {
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
    }
    
};