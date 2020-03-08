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
	     long long int i=0,mm,sum=0;
	     priority_queue<int,vector<int>,greater<int>> pq;
	     map<int,int> mp;
	     for(i=0;i<n-1;i++)
	     {
	         cin>>a[i];
	         sum += a[i];
	         
	     }
	     mm = (n*(n+1))/2;
	     cout << mm-sum<< endl;
	     
	}
	return 0;
}
