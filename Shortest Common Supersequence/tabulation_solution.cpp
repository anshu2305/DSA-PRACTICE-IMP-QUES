//Time Complexity = O(N^2) and Space Complexity = O(N^2)


int lcs(int m, int n, string s1, string s2)
{
    int dp[m+1][n+1];

    for(int i=0;i<=m;i++)
        dp[i][0]=0;

    for(int j=0;j<=n;j++)
        dp[0][j]=0;

    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(s1[i-1]==s2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }

    return dp[m][n];
}

int shortestCommonSupersequence(string X, string Y, int m, int n)
{
    int res= lcs(m,n,X,Y);
    return (m+n - res);
}
