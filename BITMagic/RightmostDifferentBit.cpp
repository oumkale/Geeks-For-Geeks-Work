#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m,flag=0,k,s1,s2;
    cin>>n>>m;
    int count=0;
    if(n>m)
     k=n;
     else
     k=m;
    while(k)
    {
           s1 = n%2;
           s2 = m%2;
           if(s1 ^ s2)
           {
               count++;
               break;
           }
           n=n/2;
           m=m/2;
           k=k/2;
           count++;
    }
       cout<<count<<endl; 
  }     
}
