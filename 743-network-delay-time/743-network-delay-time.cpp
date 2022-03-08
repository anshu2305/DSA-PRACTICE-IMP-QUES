class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        vector <int> vistime(n+1, INT_MAX);
        
        vistime[k]=0;
        for (int i = 0; i < n; i++) {
            for(vector <int>  ed: times){
                int node = ed[0], adj= ed[1], weight = ed[2];
                if(vistime[node] != INT_MAX && vistime[node]+weight < vistime[adj])
                    vistime[adj] = vistime[node]+weight;
            }
        }
        int maxwait = 0;
        
        for (int i = 1; i <= n; i++)
            maxwait = max(maxwait, vistime[i]);
        
        return maxwait == INT_MAX ? -1 : maxwait;
    }
};