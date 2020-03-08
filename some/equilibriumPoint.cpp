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
	     long long int i=0,mI=0,count=0,sum1=0,sum=0,c=0,j=0;
	     
	     for(i=0;i<n;i++)
	     {
	         cin>>a[i];
	         sum+=a[i];
	     }
	     if(n==1)
	     {
	         cout << 1 << endl;
	         continue;
	         
	     }
	     for(i=0;i<n;i++)
	     {
	         
	         sum -= a[i];
	         if(sum == sum1)
	          {
	              cout << i+1 << endl;
	             mI=1;
	              break;
	              
	          }
	          else
	           sum1 += a[i];
	     }
	     if(mI==0)
	     cout << -1 << endl;
	 }    
	return 0;
}
