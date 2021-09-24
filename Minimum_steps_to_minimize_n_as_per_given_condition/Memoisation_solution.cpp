//Time Complexity: O(n), as there will be n unique calls to store reult of n numbers and Space Complexity: O(n)

int memo[10000];
int getMinSteps(int n)
{
    // base case
    if (n == 1)
       return 0;
   //if the subproblem is already computed
    if (memo[n] != -1)
       return memo[n];
 
    int res = getMinSteps(n-1, memo);
    if (n%2 == 0)
        res = min(res, getMinSteps(n/2, memo));
    if (n%3 == 0)
        res = min(res, getMinSteps(n/3, memo));
    memo[n] = 1 + res;
  
    return memo[n];
}
