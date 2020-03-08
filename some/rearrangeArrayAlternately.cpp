#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
      long long int i=0,n,m,s,c0=0,c1=0,c2=0,j=0;
      cin>>n;
      vector<int> a;
      vector<int> ans;
      for(i=0;i<n;i++)
       {
           cin>>m;
           a.push_back(m);
       }
       j=n-1;
       i=0;
       while(i<j)
       {
         ans.push_back(a[j]);
         ans.push_back(a[i]);
         i++;
         j--;
         if(i>=j)
         break;
       }
       if(i==j)
        {
         ans.push_back(a[i]);
        }
       for(i=0;i<n;i++)
       {
         cout << ans[i] << " ";
       }
       cout << endl;
    }   
	return 0;
}
