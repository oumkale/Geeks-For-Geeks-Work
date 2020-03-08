/*
Given a boolean matrix mat[M][N] of size M X N, modify it such that if a matrix cell mat[i][j] is 1 (or true) then make all the cells of ith row and jth column as 1.
*/
#include <iostream>
using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
    {
         long long int n,m,h;
         cin>>n>>m;
         h = max(n,m);
         int a[n]={0};
         int b[m]={0};
         int u=0,v=0;
         for(int i=0;i<n;i++)
         {
             for(int j=0;j<m;j++)
             {
                 cin>>h;
                 if(h==1)
                 {
                   a[i]=1;
                    b[j]=1; 
                 }
                 
             }
         }
         for(int i=0;i<n;i++)
         {
             for(int j=0;j<m;j++)
             {
                 if(a[i] || b[j])
                 {
                    cout <<1<<" ";
                 }
                 else
                   cout <<0<<" ";
             }
             cout << endl;
         }     
       
    }
	return 0;
}
