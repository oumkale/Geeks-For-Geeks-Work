// Given an array arr of N integers. Find the contiguous sub-array with maximum sum.
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	  long long int n,i=0;
      cin>>n;
      int a[n];
      for(i=0; i<n;i++)
       cin>>a[i];
       int k=0,u=0;
     int localSum  = a[0];
     int globalSum = a[0];
         
     for(i=1; i<n;i++)
     {
         localSum = max(a[i],localSum+a[i]);
         globalSum = max(localSum, globalSum);
     }
    
	cout << globalSum<< endl;
  	}
  	return 0;
}
