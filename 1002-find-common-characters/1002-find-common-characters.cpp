class Solution {
public:
    
    string match(string s1, string s2){
        int m=  s2.length();
        string res;
        for(int i=0;i<m;i++){
            if(find(s1.begin(), s1.end() ,s2[i]) != s1.end()){
                res += s2[i];
                int ind = find(s1.begin(), s1.end() ,s2[i]) - s1.begin();
                s1[ind]='#';
            }
                
        }
        return res;
    }
    
    vector<string> commonChars(vector<string> &words) {
        vector <string> v;
        string res = words[0];
        int n = words.size();
        for(int i=1; i<n;i++){
            res =  match(res, words[i]);
            //if(res.length()==0)
               // break;
        }
        string s;
        for(auto x :res){
            s="";
            s += x;
            v.push_back(s);
        }
        return v;
    }
};