class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        /*int n=coins.size();
        if(n==0)
            return 0;
        int dp[val+1];
        memset(dp , INT_MAX, sizeof(dp));
        dp[0] = 0;
        for(int j=0;j<n;j++){
            for(int i=1; i<=val; i++){
                if(coins[j] <= i){
                    int subres= dp[i-coins[j]];
                    if(subres != INT_MAX){
                        dp[i] = min(subres + 1, dp[i]);
                    }
                }
            }
        }
        if(dp[val]==INT_MAX) return -1;
        return dp[val];
        */
        vector<int>dp(amount+1,INT_MAX);
       
        dp[0]=0;
        
       for(auto coin : coins){
            for(int amt=1; amt<=amount; amt++ ){
               if(coin <= amt){
                   if(dp[amt-coin]!= INT_MAX)
                   dp[amt] =min(1+dp[amt-coin],dp[amt]);
               }        
            }
        }
        
        if(dp[amount]==INT_MAX) return -1;
        return dp[amount];
    }
};