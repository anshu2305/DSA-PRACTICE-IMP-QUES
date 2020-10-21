#include <iostream>
using namespace std;

string reverseString(string S){
  int n;
  char temp;
  n=S.length();
  // Your code goes here
  for(int i=0;i<n/2;i++){
      temp=S[i];
      S[i]=S[n-i-1];
      S[n-i-1]=temp;
  }
  return S;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    cout<<reverseString(s)<<endl;
  }
}
