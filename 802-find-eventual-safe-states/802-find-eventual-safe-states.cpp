class Solution {
public:
    
    unordered_set<int> terminal_nodes;
    
    bool isSafeNode(vector<vector<int>>& graph, int node, vector<bool>& visited) {
        if(terminal_nodes.count(node)) return true;
        
        bool issafe = true;
        if(visited[node] && terminal_nodes.count(node)==0) {
            return false;
        }

        visited[node] = true;
        for(int i:graph[node]) {
            if(!isSafeNode(graph,i,visited)) {
                issafe = false;
                break;
            }
        }
        if(issafe)
            terminal_nodes.insert(node);
        return issafe;
    }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        for(int i = 0; i < graph.size(); i++) 
            if(graph[i].size() == 0) 
                terminal_nodes.insert(i);
        
        vector<int> ans;
        vector<bool> visited(graph.size(), false);
        for(int i = 0; i < graph.size(); i++) {
            if(isSafeNode(graph,i,visited))
                ans.push_back(i);
        }
        
        return ans;
    }
};