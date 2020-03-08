#include<iostream>
#include<algorithm>
using namespace std;

int main()
 {
	int t;
	cin>>t;
	while(t--){
      long long int i=0,n,m,s,c0=0,c1=0,c2=0,j=0;
      cin>>n;
      vector<long long int> v(n);
      for(i=0;i<n;i++)
       {
           cin>>m;
           v.push_back(m);
         if(m==0)
           c0++;
         else if(m==1)
           c1++;
         else if(m==2)
           c2++;
       }
       j=0;
      // cout << " "<<c0 <<" "<< c1 << " " <<c2 << endl;
       for(i=0;i<c0;i++)
       {
           v[j++] = 0;
           cout << 0 << " ";
       }
       for(i=0;i<c1;i++)
       {
           v[j++] = 1;
           cout << 1 << " ";
       }
       for(i=0;i<c2;i++)
       {
           v[j++] = 2;
           cout << 2 << " ";
       }
       cout << endl;
  	}
	return 0;
}
