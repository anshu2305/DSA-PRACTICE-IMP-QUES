#include<bits/stdc++.h>
using namespace std;

bool match(char a, char b){
    return (( a=='(' && b==')' )||( a=='[' && b==']' )||( a=='{' && b=='}' ));
}

bool ispar(string x)
{
    // Your code here
    stack <char> s;
    for(int i=0;i<x.length();i++)
    {
        if (x[i] == '(' || x[i] == '[' || x[i] == '{'){  
              s.push(x[i]); 
            } 
        else{
            //cout<<s.top()<<" ";
            if(s.empty()==true)
                return false;
            else if(match(s.top(),x[i])==false){
                return false;
            }
            else{
                s.pop();
            }
        }  
    }
    return (s.empty());
}

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       if(ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
