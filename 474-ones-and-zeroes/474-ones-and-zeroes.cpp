class Solution {
public:
    
    void count(int &zeros, int &ones, string s){
        for(auto x: s){
            if(x=='0') 
                zeros++;
            else
                ones++;
        }
    }
    int memo[601][101][101];
    
    int solve(vector<string>& strs,int i, int m, int n){
         if(i==strs.size() || m+n ==0){
             return 0;
         }
         
        if(memo[i][m][n] > 0)
            return memo[i][m][n];
        
        int ones=0, zeros=0;
        count(zeros, ones, strs[i]);

        int take=0;
        if(ones <= n && zeros <= m){
            take = 1+ solve(strs,i+1, m-zeros, n-ones);
        }
        int not_take = solve(strs,i+1, m, n);
        memo[i][m][n] = max(take, not_take);
        return memo[i][m][n];

    }
    
    int findMaxForm(vector<string>& strs, int m, int n) {
        int memo[strs.size()][m+1][n+1];
        
        return solve(strs, 0, m, n);
    }
};