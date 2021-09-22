//Recursive solution with time exponential complexity

    int find(int i,int j,int n,int m){
        if(i>=n || j>=m){
            return 0;
        }
        if(i == n-1 && j== m-1){
            return 1;
        }
        return (find(i+1,j,n,m)+find(i,j+1,n,m));
    }
    
    
    int uniquePaths(int m, int n) {
        if(n==0 || m==0)
            return 0;
        return find(0,0,n,m);
    }
