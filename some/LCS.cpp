#include <iostream>
using namespace std;
int findlcs(int a[], int n)
{ 
    int *dp=new int[n];
    for(int i=0;i<n;i++)
	    dp[i]=1;
	for(int i=1;i<n;i++)
	{
	   for(int j=i-1;j>=0;j--)
	   {
	       if(a[i] > a[j])
	       {
	           int ans = dp[j]+1;
	           if(ans > dp[i])
	             dp[i]=ans;
	           
	       }
	   }
	}
	int max_=dp[0];
	for(int i=0;i<n;i++)
	    if(dp[i] > max_)
	     max_ = dp[i];
    delete [] dp;
    return max_;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int *a = new int[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];     
	    }
	    cout <<findlcs(a,n)<< endl;     
	      
	    delete [] a;  
	} 
	return 0;
}
