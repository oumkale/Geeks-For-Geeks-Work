#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,fla=0,u,v,k,m=0;
    cin>>n;
    int count=0;
    while(n)
    {
        
        k = n%2;
        if(k==1)
        {
            count++;
        }
        else
        {
              count=0;
        }
        if(count > m)
              m= count;
             
        n = n/2;
        //break;
      
      //count++;
  }
   
   cout<<m<<endl; 
  }     
}
