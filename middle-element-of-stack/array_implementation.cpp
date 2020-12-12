#include <bits/stdc++.h>
using namespace std;

int stackMiddle(int n, stack<int> st){
    //Your code here
    int mid=ceil(n/2);
    while(mid--){
        st.pop();
    }
    return st.top();
}

int main(){
  int n;
  cin>>n;
  stack<int> s;
  while(n--){
    int a;
    cin>>a;
    s.push(a);
  }
  cout<<stackMiddle(n,s);
  return 0;
}
