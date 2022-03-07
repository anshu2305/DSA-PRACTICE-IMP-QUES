class Solution {
public:
    vector<int> findOrder(int num, vector<vector<int>>& prerequisites) { 
        vector <int> ans;
        if(num == 0 )
            return ans;
        
        queue <int> q;
        vector <int> indegree(num,0);
        vector <int> adj[num];
        
        for(int i=0;i<prerequisites.size();i++)
        {
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        
        for(int i=0;i<num;i++){
            for(auto ad: adj[i]){
                indegree[ad]++;
            }
        }
        for(int i=0;i<num;i++){
            if(indegree[i]==0)
                q.push(i);
        }
        
        if(q.empty()==true)
            return ans;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(auto ad: adj[node]){
                indegree[ad]--;
                if(indegree[ad]==0)
                    q.push(ad);
            }
        }
        if(ans.size()==num)
            return ans;
        
        return {};
    }
};