#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
 {
	int t;
	cin>>t;
	while(t--){
      long long int i=0,n,m,s,c0=0,c1=0,c2=0,j=0;
      cin>>n;
      int *a = new int[n];
      int *b = new int[n];
      for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(i=0;i<n;i++)
       {
           cin>>b[i];
       }
       i=0;
       j=0;
       sort(a,a+n);
       sort(b,b+n);
       while(i<n && j<n)
       {
          if(a[i] <= b[j])
          {
             c0++;
             i++;
          }
          else
          {
            c0--;
            j++;
          }
          c2 = max(c2,c0);
       }
      cout << c2 << endl;
       delete [] a;
       delete [] b;
  	}
	return 0;
}

