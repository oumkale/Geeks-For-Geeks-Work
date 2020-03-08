#include<iostream>
using namespace std;
bool prime(int n)
{
    if(n<=1)
     return 0;
     for(int i=2;i<n;i++)
     {
         if(n%i==0)
         return 0;
     }
     return 1;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	     int n;
	     cin>>n;
	     int i=3;
	     int j=n;
	     if(n<=2)
	     {
	         continue;
	     }
	     while(i<=n)
	     {
	         if(prime(i)==true && prime(n-i)==true)
	         {
	             cout << i << " " << n-i;
	             cout<<endl;
	             break; 
	         }
	         
	         i++; 
	        // j--;
	     }
	}
	return 0;
}
