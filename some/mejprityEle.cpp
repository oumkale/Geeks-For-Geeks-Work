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
	     long long int i=0,mI=0,count=0,sum=0,c=0;
	     //more index
	     priority_queue<int,vector<int>,greater<int>> pq;
	     map<int,int> mp;
	     for(i=0;i<n;i++)
	     {
	         cin>>a[i];
	         if(a[i]==a[mI])
	          c++;
	          else
	          c--;
	          if(c==0)
	          {
	              mI=i;
	              c=1;
	              
	          }
	     }   
	     c=0;
	     for(i=0;i<n;i++)
	     {
	         if(a[i]==a[mI])
	          c++;
	          
	     }
	     if(c > (n/2))
	      cout << a[mI] << endl;
	     else
	      cout << -1 << endl;
	}
	return 0;
}
