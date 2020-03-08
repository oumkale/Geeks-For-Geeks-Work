#include<iostream>
using namespace std;
#include <queue>
bool isInorder(int *arr, int n)
{
    if(n==0 || n ==1)
      return true;
    int flag=true;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1] >= arr[i]) 
        {
            flag=false;
            break;
        }        
    }
    return flag;
}
int main() {
	int T;
	int N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    int arr[N];
	    for(int i=0;i<N;i++)
	      cin>>arr[i];
	    
	    if(isInorder(arr,N))
	      cout<<true;
	    else 
	      cout<<false;
	    cout<<endl;
	}
	return 0;
}
