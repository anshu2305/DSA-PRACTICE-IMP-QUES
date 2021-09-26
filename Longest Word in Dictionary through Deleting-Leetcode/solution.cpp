
bool issubseq(string s, string t){
    int n= s.length();
    int m=t.length();
    int i=0,j=0;
    //if the subseq size is > string size ,,, no way to find such subseq in string.
    if(m > n) return false;

    while(i < n && j<m){
        if(s[i]== t[j]){
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    return (j==m);
}
    
string findLongestWord(string s, vector<string>& dictionary) {
    string result = "";

    for(string str: dictionary){
        if(issubseq(s, str)){
          int size=str.length();
          int res_size= result.length();
          if( ( res_size< size  ) || (res_size == size && (lexicographical_compare(str.begin(),str.end(), result.begin(), result.end())) )){
              result = str;
          }  
        }
    }
    return result;
}
