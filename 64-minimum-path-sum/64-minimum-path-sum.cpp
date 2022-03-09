class Solution {
public:
    
    int solve(vector<vector<int>>& grid,int i, int j, vector <vector <int>> &dp){
        if(i==0 && j==0)
            return grid[i][j];
        
        if(i<0 || j<0)
            return INT_MAX;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        long long int up =solve(grid, i-1, j, dp);
        long long int left = solve(grid, i, j-1, dp);
        
        return dp[i][j]= min(up, left) + grid[i][j];
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        vector <vector<int>> dp(n, vector <int> (m,-1));
        return solve(grid, n-1, m-1, dp);
    }
};