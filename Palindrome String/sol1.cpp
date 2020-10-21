#include <iostream>
using namespace std;

int isPalindrome(string S){
  int n;
	string s;
  n=S.length();
  s=S;
  // Your code goes here
  for(int i=0;i<n/2;i++){
      S[i]=S[n-i-1];
  }
  if(s==S){
      return 1;
  }
  else{
      return 0;
  }
}

int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    cout<<isPalindrome(s)<<endl;
  }
}
