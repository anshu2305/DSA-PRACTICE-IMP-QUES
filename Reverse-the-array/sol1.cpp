#include <iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int j=0;j<n;j++){
      cout<<a[j]<<" ";
    }
    cout<<endl;
  }
}
