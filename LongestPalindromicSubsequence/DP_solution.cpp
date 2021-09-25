//This problem can be seen as a variation of LCS as we are comparing the string with the reverse of itself. So we find the LCS of the given string and reverse of it.
//Time complexity and space complexity is same as of LCS i.e. O(n^2)

int longestPalinSubseq(string s1)
{
    // your code here
    string s2=s1;
    reverse(s1.begin(),s1.end());
    
    int n=s1.length();
    int lcs[n+1][n+1];
    
    for(int i=0;i<=n;i++){
        lcs[i][0]=0;
    }
    for(int j=0;j<=n;j++){
        lcs[0][j]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(s1[i-1]!=s2[j-1]){
                lcs[i][j]=max(lcs[i-1][j], lcs[i][j-1]);
            }
            else{
                lcs[i][j]=1+lcs[i-1][j-1];
            }
        }
    }
    return lcs[n][n];
}
