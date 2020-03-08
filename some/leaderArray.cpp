#include <iostream>
#include <map>
#include <queue>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	     long long int n;
	     cin>>n;
	     int a[n];
	     int b[n]={0};
	     long long int i=0,mI=0,count=0,sum=0,c=0,j=0;
	     //more index
	     if(n==1)
	     {
	         cin>>a[0];
	         cout << a[0] << endl;
	         continue;
	         
	     }
	     
	     for(i=0;i<n;i++)
	     {
	         cin>>a[i];
	         
	     }
	     b[j++]=a[n-1];
	     mI=a[n-1];
	     for(i=n-2;i>=0;i--)
	     {
	         if(mI <= a[i])
	         {
	             b[j++] = a[i];
	             mI=a[i];
	         }
	         
	     }
	     for(int i=j-1;i>=0;i--)
	       cout << b[i] << " ";
	     cout << endl;
	}    
	return 0;
}
