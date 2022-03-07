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
            //b1 should be done before a1 so edge from b1 to a1 should be established
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
        //if there is no node with indegree 0 then it is definitely cyclic 
        //but it should be acyclic inoder to get finished
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
        // toposort elems should be equal to total nums
        if(ans.size()==num)
            return ans;
        
        return {};
    }
};