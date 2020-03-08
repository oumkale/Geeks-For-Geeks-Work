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
    
    while(n)
    {
        if(count == m) 
        {
           if(n&1)
           {
               cout<< "Yes" <<endl;
           }
           else
           cout<< "No" <<endl;
        }   
           n=n/2;
           count++;
    }
  }     
}
