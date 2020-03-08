
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
void longpali(string s)
{
   int n = s.size();
   int long_size=1,m=1,st,e,i;
   bool val=0;
   bool pa[n][n];
    for(int i=0;i<n;i++)
    {
       pa[i][i]=true;
    }
    for(int i=0;i<n-1;i++)
    {
      if(s[i] == s[i+1])
      {
        pa[i][i+1]=true;
        st = i;
        e=i+1;
        long_size=2;
      }
    }
   for(int cu=3;cu<=n;cu++)
   {
       for(i=0;i<n-cu+1;i++)
       {
          int j= i+cu-1;
          if(s[i] == s[j] && pa[i+1][j-1])
          {
           pa[i][j]=true;
        st = i;
        long_size=cu;
           e = j;
          }
       }
        
   } 
   cout << st << " " << e<< endl; 
    for(int i=st;i<=long_size+st;i++)
     cout <<s[i];
     cout << endl;
}
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s; 
	     longpali(s);
	   
	}
	return 0;
}
