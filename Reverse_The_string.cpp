/*
Question: Print reverse of a string
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	string s;
	for(int i=0;i<t;i++){
	    cin>>s;
	    reverse(s.begin(),s.end());
	    cout<<s<<endl;
	}
	return 0;
}
