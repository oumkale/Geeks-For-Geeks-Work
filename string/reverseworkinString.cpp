#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int n,m;
      string a,b="";
      cin>>a;
      n = a.size();
      m=n;
      int k=0;
      for(int i=n-1;i>=0;i--)
      {
         if(a[i] == '.')
         {
           for(int j=i+1;j<m;j++)
            { b[k++]=a[j];
            }
            m=i;
            b[k++]='.';
         }
         else
         ;
      }
      
      for(int i=0;i<m;i++)
      { 
         b[k++]=a[i];
      }
      
      for(int i=0;i<=k+1;i++)
        cout << b[i];
    cout << endl;
   }
   
   return 0;
}
