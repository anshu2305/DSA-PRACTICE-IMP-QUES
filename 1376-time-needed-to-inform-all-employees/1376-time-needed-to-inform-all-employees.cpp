class Solution {
public:
    vector<int> adj[100000];
    int dfs(int src, vector<int>& informTime){
			if(adj[src].size() == 0) return 0;
			int res  = 0;
			for(int i : adj[src]) 
                res = max(res,dfs(i,informTime));
			return res + informTime[src];
		}
		int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
			//vector<vector<int>> adj(n);
			for(int i = 0 ; i < n ; i++){
				if(manager[i] != -1) 
				    adj[manager[i]].push_back(i);
			}
			return dfs(headID,informTime);
		}
};