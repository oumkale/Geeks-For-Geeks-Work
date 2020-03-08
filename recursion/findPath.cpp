#include<iostream>
using namespace std;
int countway(int i,int j, int n, int m)
{
    if(n==i && m==j)
      return 1;
    if(i>n || j>m)
      return 0;
    int c1 = countway(i+1,j,n,m); 
    int c2 = countway(i,j+1,n,m);
    return (c1+c2);
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int count = countway(1,1,n,m);
	    cout << count << endl;
	}
	return 0;
}
