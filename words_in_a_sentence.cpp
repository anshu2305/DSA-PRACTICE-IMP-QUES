vector <string> getwords(string s){
    vector <string> v;
    bool flag=false;
    string str,finalstr;
    for(int i=0;i<s.length();i++){
        if(isalpha(s[i])){
            str=str+s[i];
            flag=true;
        }
        else if(flag==true && s[i]==' '){
            v.push_back(str);
            str= "";
        }
    }    
    v.push_back(str);
    return v;
}
