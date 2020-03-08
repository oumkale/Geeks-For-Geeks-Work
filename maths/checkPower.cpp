#include<iostream>
#include <math.h>
using namespace std;
#define ll long long

int main()
 {
	//code
	int t;
	cin>>t;
    while(t--)
    {
        ll n,m,flag=0;
        cin>>n>>m;
       // cout<<sqrt(m)<<endl;
        ll r= sqrt(m)+1;
        for(int i=1;i<=r;i++)
        {
            if(pow(n,i)==m)
             flag=1;
        }
        if(flag==1 || m==1)
          cout<<1<<endl;
        else
          cout<<0<<endl;
    }
	return 0;
}
