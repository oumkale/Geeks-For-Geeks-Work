#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int count=0;
    while(n)
    {
      if(n&1)
      {
        count++;
        break;
      }
      n=n/2;
      count++;
    }
     
   cout<<count<<endl; 
  }     
}
