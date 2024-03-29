//
//Time complexity is O(n^2) as we have to check for all the possible cases.
//Space Compexity is O(n^2) to store result corresponding to all cases.
//


int longestCommonSubstr (string s1, string s2, int m, int n)
{
    // your code here
    int dp[m+1][n+1];
    int ans=0;
    for(int i=0;i<=m;i++)
        dp[i][0]=0;

    for(int j=0;j<=n;j++)
        dp[0][j]=0;

    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(s1[i-1]==s2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
                ans=max(ans, dp[i][j]);
            }
            else
                dp[i][j] = 0;
        }
    }

    return ans;
}
