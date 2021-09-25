//TIME COMPLEXITY = O(N) , SPACE COMPLEXITY = O(N)

int Stairs(int n, vector <int> &dp){
    if(n==1 || n==0) 
        return 1;
    if(dp[n]!= -1)
        return dp[n];
    else{
        int x=Stairs(n-1,dp);
        int y=Stairs(n-2,dp);
        return dp[n]= 1 + max( x , y);
    }
}

int climbStairs(int n) {
    vector <int> dp(n+1,-1);
    if(n==1 || n==0) 
        return 1;
    return Stairs(n, dp);
}
