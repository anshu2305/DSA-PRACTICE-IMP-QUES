class Solution {
public:
    
    bool isbipar(vector<vector<int>>& graph, int src, vector <int> &color){
        //bfs
        queue <int> q;
        q.push(src);
        color[src]=0;
        while(!q.empty()){
            int node= q.front();
            q.pop();
            for(auto v: graph[node]){
                if(color[v] == -1){
                    q.push(v);
                    color[v] = 1- color[node];
                }
                else if(color[v] == color[node]){
                    return false;
                }
            }
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n= graph.size();
        vector <int> color(n,-1);
        for(int i=0; i<n;i++){
            if(color[i]==-1)
                if(isbipar(graph,i,color)==false)
                    return false;
        }
        return true;
    }
};