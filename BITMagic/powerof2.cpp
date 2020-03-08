#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      long long int n;
      cin>>n;
     bool bit = true;
     if(n==0)
      {
          cout<<"NO" << endl;
          continue;
      }
     if(n & (n-1))
       bit=false;
    if(bit==false)
        cout<<"NO"<< endl;
    else
      cout << "YES" << endl;
  }     
}
