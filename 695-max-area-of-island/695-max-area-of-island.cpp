class Solution {
public:
    int dfs(int i, int j, vector<vector<int>> &grid , int &area){
        if(i<0 || i >= grid.size() || j<0 || j >=grid[0].size() || grid[i][j]== 0){
            return 0;
        }
        grid[i][j]= 0;
        dfs(i+1,j,grid,area);
        dfs(i-1,j,grid,area);
        dfs(i,j+1,grid,area);
        dfs(i,j-1,grid,area);
        
        area+=1;
        return 1;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if(grid.size()==0)
            return 0;
        int area=0 , maxarea=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                int area=0;
                if(grid[i][j]== 1){
                    if(dfs(i,j,grid,area))
                        maxarea= max(maxarea,area);
                }
            }
        }
        return maxarea;
    }
};