/*
  Ques: Print String in reverse order.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    //code
    int t,n;
    cin>>t;
    string s;
    for(int i=0;i<t;i++){
        cin>>s;
        n=0;
        n=s.length();
        for(int j=0;j<n/2;j++){
            swap(s[j],s[n-j-1]);
        }
        cout<<s<<endl;
    }
    return 0;
}
