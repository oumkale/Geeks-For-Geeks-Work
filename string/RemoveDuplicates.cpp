#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
   int t;
   cin>>t;cin >> ws;
   while(t--)
   {
      int n,m,flag=0;
      string b="",str="";
      string a;
      getline(cin, a);
     // cin >> ws;
      //cout<<a<<" ";
      
      
      n = a.size();
      int i=0;
      int c[257];
      int k=0;
     for(i=0;i<n;i++)
      {
          c[a[i]]++;
      }
      for(i=0;i<n;i++)
      {
          if( c[a[i]]>0)
          {
               c[a[i]]=0;
              cout<< a[i];
          }
      }
      cout << endl;
   }
   
   return 0;
}
