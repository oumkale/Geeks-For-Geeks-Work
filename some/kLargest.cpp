#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
// Driver program to test above functions
/*
 #include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
// Driver program to test above functions
int main()
{   
    
   int T;  
    scanf("%d",&T);
    
   while(T--)
   {
      int k,n,i=0,K=0;
      cin>>n;
      int a[n],b[100000]={0};
      for(i=0;i<n;i++)
      {
          cin>>a[i];
          b[a[i]]++;
      }
      //sort(a,a+n);
      cin>>k;
      
      int m=a[0];
      int mm=0;
      for(int i=1;i<=100000;i++)
      {
        if(b[i] >0)
          K++;
        if(k==K)
         {
             cout << i << endl;
             break;
         }
      }
     // cout << a[k-1] << endl;
      //  cout << mm << endl;
   
       
   }
	return 0;
}
*/
int main()
{   
    
   int T;  
    scanf("%d",&T);
   while(T--)
   {
      int k,n,i=0;
      cin>>n;
      int a[n];
      for(i=0;i<n;i++)
       cin>>a[i];
      sort(a,a+n);
      cin>>k;
      cout << a[k-1] << endl;
   }
	return 0;
}
