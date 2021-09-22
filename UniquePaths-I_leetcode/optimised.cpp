//Optimised solution based on observatory results of dynamic prog. solution 
// Time complexity is O(m-1) as it becomes a combinatory problem NCr

int uniquePaths(int m, int n) {
        if(n==0 || m==0)
            return 0;
        int N= n+m-2; 
        int r= m-1;
        double ans =1;
        for(int i=1;i<=r;i++){
            ans = ans*(N-r+i)/i;
        }
        return (int)ans;
}

int main(){
  int n,m;
  cin>>n>>m;
  cout<<uniquePaths(m,n);
  return 0;
}
