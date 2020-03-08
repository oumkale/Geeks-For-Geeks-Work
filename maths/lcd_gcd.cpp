#include<iostream>
using namespace std;
long long int lcm(long long int a,long long  int b)
{
     long long int flag=1;
     long long int l = max(a,b);
     for(long long int i=2;i<=l;i++)
     {
        if(a%i==0 && b%i==0)
          return i;
     }
     return flag;
}
long long int gcd(long long int a,long long  int b)
{
     if(a==0)
      return b;
     return gcd(b%a,a);
}
int main()
 {
	//code
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,m;
	    cin>>n>>m;
	    
	    long long int gc = gcd(n,m);
	    long long int lc= (n*m)/(gc);
	   // int lc = lcm(n,m);
	    cout << lc<<" "<<gc<<endl;
	}
	return 0;
