class Solution {
public:
    
    bool iscyclic(vector<int> adj[], int src, vector <int> &vis, vector <int> &dfs_vis){
        vis[src]=1;
        dfs_vis[src]=1;
        for(auto v: adj[src]){
            if(vis[v] == 0){
                if(iscyclic(adj, v, vis, dfs_vis) == true)
                    return true;
            }
            else if(dfs_vis[v] == 1)
                    return true;
        }
        dfs_vis[src]=0;
        return false;
    }
    
    bool canFinish(int num, vector<vector<int>>& prerequisites) {
        
        vector <int> vis(num, 0);
        vector <int> dfs_vis(num,0);
        vector <int> adj[num];
        
        for(int i=0;i<prerequisites.size();i++)
        {
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        
        for(int i=0;i<num; i++){
            if(vis[i] == 0){
                if(iscyclic(adj, i, vis, dfs_vis)==true)
                    return false;
            }
        }
        return true;
    }
};