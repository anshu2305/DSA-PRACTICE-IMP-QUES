class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n= edges.size()+1;
        if(n<3)
            return -1;
        vector <int> num_edges(n+1, 0);
        for(auto x: edges){
            num_edges[x[0]]++;
            num_edges[x[1]]++;
        }
        for(int i=1; i<=n; i++){
            if(num_edges[i] == n-1)
                return i;
        }
        return -1;
    }
};