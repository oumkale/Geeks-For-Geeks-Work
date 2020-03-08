#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      long long int p,k,n,count=0,u=0,m,flag=1;
      cin>>n;
      int x=0;
      if(n==1)
      {
          cout << 1 << endl;
          continue;
      }
    //cout << x << " ";
    if(n&(n<<1))
    {
        flag=0;
    }
    if(flag==1)
       cout << 1 << endl;
    else
       cout << 0 << endl;
      
  }     
}
