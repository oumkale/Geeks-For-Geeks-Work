#include<iostream>
using namespace std;
int a[100][100];
void countway(int n, int m, int var, int x, int y, int k)
{
         if(a[x][y] != var)
       return ;
  //  13 1
//7 4 7 3 0 1 6 7 5 7 8 8 9
//5 0 71
    if(a[x][y] == var)
       a[x][y]=k;
    if(0<=x-1 && x-1<n) 
      countway(n,m,var,x-1,y,k);
    if(0<=y-1 && y-1<m)
      countway(n,m,var,x,y-1,k);
    if(0<=y+1 && y+1<m)
      countway(n,m,var,x,y+1,k);
    if(0<=x+1 && x+1<n)
      countway(n,m,var,x+1,y,k);
     
     
    return ;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,x,y,k;
	    cin>>n>>m;
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        { 
	            cin>>a[i][j];
	        }
	    }
	    
	    int flag=0;
	    cin>>x>>y>>k;
	    int var =a[x][y];
	    
	      // cout<<var<<endl;
	     countway(n,m,var,x,y,k);
	
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        { 
	            cout<<a[i][j]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
