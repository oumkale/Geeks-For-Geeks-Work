#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      long long int p,k,n,count=0,u=0;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      int x=0;
      for(int i=0;i<n;i++)
        x ^= a[i];
       cout << x << endl;
  }     
}
