#include <iostream>
using namespace std;

void reverseArray(int arr[], int size){
  int temp;
  // Your code goes here
  for(int i=0;i<size/2;i++){
      temp=arr[i];
      arr[i]=arr[size-i-1];
      arr[size-i-1]=temp;
  }
  for(int j=0;j<size;j++){
    cout<<arr[j]<<" ";
  }
  cout<<endl;
}

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
    reverseArray(a,n);
  }
}
