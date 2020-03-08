#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
void sum_sub(int arr[], int n,int s)
{
  int ans = 0, sum = 0, st=0,e=0,flag=0;
  while(e<n)
  { 
      sum += arr[e];
      if(sum > s)
      {
          st++;
          e = st;
          sum=0;
      }
      else if(sum == s)
      {
        flag=1;
    
        break;
      }
      else
        e++;
      
  }
  if(flag)
    cout<<st+1<< " "<< e+1 <<endl;
  else
    cout << -1 << endl;
 
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum;
	    cin>>n>>sum;
	    int *a = new int[n];
	    for(int i=0;i<n;i++)
	     cin>>a[i];
	     sum_sub(a,n,sum);
	    
	    delete a;
	}
	return 0;
}

