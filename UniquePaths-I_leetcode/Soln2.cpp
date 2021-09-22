//Memoisation Solution with time complexity of O(n^2)

int find(int i,int j,int n,int m, vector<vector<int>> &dp){
        if(i>=n || j>=m){
            return 0;
        }
        if(i==n-1 && j==m-1){
            return 1;
        }
        if(dp[i][j]!= -1)
            return dp[i][j];
        else return dp[i][j]= (find(i,j+1,n,m,dp) + find(i+1,j,n,m,dp));
}


int uniquePaths(int m, int n) {
    if(n==0 || m==0)
        return 0;
    vector<vector<int>> dp( n , vector<int> (m,-1));

    return find(0,0,n,m,dp);
}
