#define ll long long 
ll memo[1000][100000];

int knapsackUtil(int i, int knapwt, int W, int wt[], int val[], int n ){
  if(i== n){
    return 0;
  }  
  if(knapwt > W){
    return -1e6;
  }
  if(memo[i][knapwt] != -1){
    return memo[i][knapwt];
  }
  else{
      ll steal=val[i] + knapsackUtil(i+1, knapwt+ wt[i], W, wt, val, n);
      ll notsteal=  knapsackUtil(i+1, knapwt, W, wt, val, n); 
      return memo[i][knapwt] = max(steal,  notsteal);    
  }
}

int knapSack(int W, int wt[], int val[], int n) 
{ 
  memset(memo, -1, sizeof(memo));
  return knapsackUtil( 0,0,W, wt, val, n);
}

