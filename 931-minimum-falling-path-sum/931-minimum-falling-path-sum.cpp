class Solution {
public:
    int solve(vector<vector<int>>& matrix, int n, int i , int j,vector<vector<int>>& dp)
    {
        if(j>=n || j<0)
            return 1e9;
        if(i==0)
            return matrix[i][j];
        if(dp[i][j]!= -1)
            return dp[i][j];
        
        int up= matrix[i][j] + solve(matrix, n, i-1,j,dp);
        int left_dia = matrix[i][j] + solve(matrix, n, i-1,j+1,dp);
        int right_dia = matrix[i][j] + solve(matrix, n, i-1,j-1,dp);
        
        dp[i][j] = min(min(left_dia, right_dia), up);
        
        return dp[i][j];
    }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        //memoisation soln
        int n = matrix.size(), ans=INT_MAX;
        vector<vector<int>> dp(n,vector<int>(n,-1));
        for(int i=0;i<n;i++)
            ans = min(solve(matrix, n, n-1,i,dp), ans);
        return ans;
    }
};