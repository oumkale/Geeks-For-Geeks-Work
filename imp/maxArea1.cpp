#include<bits/stdc++.h>
using namespace std;
int t,n,m,arr[50][50],max_area,area;
bool vis[50][50];



void solve(int i,int j,int& area)
{

    if(arr[i][j]==0)
    return ;
    
    area+=1;;
    vis[i][j]=true;
    
    if(i+1<n && !vis[i+1][j])
    {
     solve(i+1,j,area);
    }
    if(i-1>=0 && !vis[i-1][j])
    {
        solve(i-1,j,area);
    }
    if(j+1<m && !vis[i][j+1])
    {
        solve(i,j+1,area);
    }
    if(j-1>=0 && !vis[i][j-1])
    {
        solve(i,j-1,area);
    }
    if(i+1<n && j+1<m && !vis[i+1][j+1])
    {
        solve(i+1,j+1,area);
    }
    
     if(i-1>=0 && j-1>=0 && !vis[i-1][j-1])
    {
        solve(i-1,j-1,area);
    }
    
    
    if(i+1<n && j-1>=0 && !vis[i+1][j-1])
    {
        solve(i+1,j-1,area);
    }
   
    if(i-1>=0 && j+1<m && !vis[i-1][j+1])
    {
        solve(i-1,j+1,area);
    }

}
int main()
{

cin>>t;
while(t--)
{
cin>>n>>m;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>arr[i][j];
        
    }
}

memset(vis,false,sizeof(vis));
max_area=0;

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(!vis[i][j] && arr[i][j]==1)
        {
            area=0;
            solve(i,j,area);
            max_area=max(area,max_area);
        }
        
    }
}
cout<<max_area<<endl;


}


}
