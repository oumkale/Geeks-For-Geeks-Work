#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
     long long int p,k,n,count=0,u=0,m,flag=1;
     cin>>n>>m;
     int x = n ^ m;
     while(x)
     {
         if(x%2!=0)
           count++;
         x=x>>1;
     }  
     cout << count << endl;
      
  }     
}
