class Solution {
public:
    
    /*
    Recursive approach:
    
    int coinChange(vector<int>& coins, int val){
    
    //base case for bottom up approach
     if(val == 0)
        return 0;
      int res= INT_MAX; // for current call imaginary number of call are requires thats why we took int max  
      
      for(int i=0; i<n;i++){
        if(coins[i] < val)
        {
            int subres = coinChange(coins, n, val-coins[i]); //stores res for recursive calls;
            //if subres is not INTMAX that means some solution has been found during this recursive call
            if(subres != INT_MAX)
                res= min(res, res+1);
        }
      }
      return res;
    }
    */

    /*
        Memoisation soln
        int memo[10000];
        
        int solve(){
            //base case for bottom up approach
            if(val == 0)
              return memo[val] =0;
            if(memo[val] != -1)
                return memo[val];
            
            int res= INT_MAX; // for current call imaginary number of call are requires thats why we took int max  

              for(int i=0; i<n;i++){
                if(coins[i] < val)
                {
                    int subres = coinChange(coins, n, val-coins[i]); //stores res for recursive calls;
                    //if subres is not INTMAX that means some solution has been found during this recursive call
                    
                    if(subres != INT_MAX){
                        
                        res= min(res, subres+1);
                        memo[val-coins[i]] = subres;
                    }
                        
                }
              }
              return memo[val]=res;    
        }
        
        int coinChange(vector<int>& coins, int val){
            memo[val];
            memset(memo, -1, sizeof(dp));
            return sovle(coins, val);
        }
    */
    
    
    int coinChange(vector<int>& coins, int amount) {
        
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