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
      string a,b="",ans="";
      cin>>a;
      n = a.size();
      int i=0;
      int k=0;
      for(i=0;i<n;i++)
      {
         b="";
         while(a[i] != '.' && i<n) 
         {
            b+=a[i];
            i++;
         }
         ans = b + ans;
         if(i<n)
          ans=a[i]+ans;
         
      }
      
      cout <<ans <<endl;
   }
   
   return 0;
}
