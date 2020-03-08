#include<iostream>
using namespace std;
int f(int n) 
{
   if (n < 5) 
     return n;

    return max(4*f(n-5), 3*f(n-4));
}
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         if(n>75)
           cout <<(-1)<<endl;
          else 
          cout<<f(n)<<endl;
     }
	//code
	return 0;
}
