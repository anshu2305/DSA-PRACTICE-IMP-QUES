class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector<int>> res(numRows);
        
        for(int i=0;i<numRows ; i++){
            res[i].resize(i+1);
            // each row contains i+1 elements so resize each row with i+1 column
            
            res[i][0] = res[i][i] = 1;
            //frst and last element of each row is always 1
            
            for(int j=1;j<i ; j++){
                res[i][j]  = res[i-1][j-1] + res[i-1][j];
                //each index is a sum of the j and j-1 column of last row
            }
        }
        
        return res;
    }
};