#include<bits/stdc++.h>
using namespace std;
int main()
 {   int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n+1];
    arr[0]=arr[1]=1;
    arr[2]=2;
    for(int i=3;i<=n;i++){
        arr[i]=0;
    }
    for(int i=3;i<=n;i++){
        for(int j=1;j<=i;j++){
            int l=j-1;
            int r=i-j;
            arr[i]+=(arr[l]*arr[r]);
        }
    }
    cout<<arr[n]<<endl;
    }
	
	return 0;
}
