class Solution {
public:
    
    //method1- first element of next row is not bigger than last elemnt of previous row (GFG variation)
        /*
        if(matrix.size()==0)
            return false;
        int n= matrix.size(), m= matrix[0].size();
        
        int i=0, j= m-1;
        //we will move left if number is target than curr elem  and down if target is bigger than current elem
        while(j>=0 && i<n){
            int curr_elem=matrix[i][j];
            if(curr_elem == target)
                return true;
            else if(target >  curr_elem)
                i++;
            else
                j--;
        }
        return false;
        */
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //method 2- if first elemnt of next row is always bigger than the last element of next row
        // do a binary search with the help of imaginary matrix
        int n=matrix.size(),  m= matrix[0].size();
        int low= 0, hi= (n*m) - 1;
        
        while(low <= hi){
            int mid = low + ( hi-low )/2;
            int row = mid/m, col= mid%m;
            
            if(matrix[row][col] == target){
                return true;
            }
            else if(matrix[row][col] > target){
                hi= mid-1;
            }
            else
                low= mid+1;
        }
        return false;
    }
};