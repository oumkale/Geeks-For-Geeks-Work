#include<iostream>
using namespace std;
int towerofh(int n, int a, int b, int c)
{
    if(n==1)
    {
      cout<<"move disk 1 from rod "<< a <<" to rod "<<c<<endl;  
      return 1;
    }
    int x = towerofh(n-1,a,c,b); 
    cout<<"move disk "<< n <<" from rod "<< a <<" to rod "<<c<<endl;   
    int y = towerofh(n-1,b,a,c);
    return x+y+1;
}    
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n,a=1,b=2,c=3;
         cin>>n;
         int si = towerofh(n,a,b,c); 
         cout<<si<<endl;
     }
	//code
	return 0;
}
