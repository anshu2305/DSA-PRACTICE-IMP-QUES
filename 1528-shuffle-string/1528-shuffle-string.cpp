class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n= s.length();
        string newstr(n,'.'); 
        int i=0;
        for(auto x : indices){
            // x= indices[i]
            newstr[x]= s[i];
            //i runs in string s
            i++;
            
        }
        return newstr;
    }
};