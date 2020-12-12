#include<bits/stdc++.h>
using namespace std;

void reverseArray(int n, int* arr);

void reverseArray(int n, int* arr){
    
  //Your code here
  stack <int> s;
  for(int i=0;i<n;i++){
      s.push(arr[i]);
  }
  for(int j=0;j<n;j++){
      arr[j]=s.top();
      s.pop();
  }
  //Reverse the array
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    
    reverseArray(n, arr);
    
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;
    }
    return 0;
}

