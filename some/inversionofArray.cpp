#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
long long int merge(int a[],int temp[],long long int l,long long int mid,long long int r)
{
   long long int i= l;
   long long int k=l;
   long long int j=mid;
   long long int inv=0;
   while(i<mid && j<=r)
   {
      if(a[i] <= a[j])
        temp[k++] = a[i++];
      else
      {
        temp[k++] = a[j++];
        inv += mid-i;
      }  
   }
   while(i<mid)
   {
     temp[k++] = a[i++];
   }
   while(j <= r)
   {
     temp[k++] = a[j++];
   }
   for(long long int i=l;i<=r;i++)
   {
      a[i] = temp[i];
   }
   return inv;
}
long long int mergesort(int a[],int temp[],long long int l, long long int r)
{
     long long int inv1=0,inv2=0,inv=0;
    if(r > l)
    {
        
        long long int mid = (l + r)/2;
         inv1 = mergesort(a,temp,l,mid);
         inv1 += mergesort(a,temp,mid+1,r);
         inv1 += merge(a,temp,l,mid+1,r);
        
    } 
    return (inv1);
}
long long int merge_sort(int a[],long long int l, long long int r)
{
      int *temp = new int[r+1];
      long long int inv = mergesort(a,temp,l,r);
      return inv;     
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
      long long int n,i=0;
      cin>>n;
      int a[n];
      for(i=0; i<n;i++)
       cin>>a[i];
      long long int inv = merge_sort(a,0,n-1);
      cout << inv << endl; 
  	}
	return 0;
}
