class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector <pair<int,int>> v;
        bool changed = false;
        sort(intervals.begin(), intervals.end());
        for(auto p: intervals){
            int frst= p[0];
            int sec= p[1];
            
            for(auto x: v){
                int x_first = x.first;
                int x_sec = x.second;
                
                if(x_sec >= frst){
                    //cout<<"before change: "<< x.first<<" "<< x.second <<endl;
                    
                    x.first = min(x_first, frst);
                    x.second = max(sec, x_sec);
                    
                    changed = true;
                    
                    //cout<<"after change: "<< x.first<<" "<< x.second <<endl;
                    
                    v.erase(find(v.begin(),v.end(),x));
                    v.push_back({x.first, x.second});
                    
                    break;
                }
                
                
            }
            
            if(changed == false){
                //cout<<"without change: "<< frst<<" "<< sec <<endl;
                v.push_back({frst,sec});
            }
            
            changed= false;
        }
        vector <vector<int>> ans;
        int i=0;
        for(auto x: v){
            vector <int> y;
            y.push_back(x.first);
            y.push_back(x.second);
            ans.push_back(y);
            //cout<< x.first<<" "<< x.second<<endl;
        }
        
        return ans;
    }
};