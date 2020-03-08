#include<iostream>
#include<algorithm>
using namespace std;
/*
#include <iostream>
using namespace std;
struct Interval
{
    int buy;
    int sell;
};
 
// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n)
{
    // Prices must be given for at least two days
    if (n == 1)    
        return;
 
    int count = 0; // count of solution pairs
 
    // solution vector
    Interval sol[n/2 + 1];
 
    // Traverse through given price array
    int i = 0;
    while (i < n-1)
    {
        // Find Local Minima. Note that the limit is (n-2) as we are
        // comparing present element to the next element. 
        while ((i < n-1) && (price[i+1] <= price[i]))
            i++;
 
        // If we reached the end, break as no further solution possible
        if (i == n-1)
            break;
 
        // Store the index of minima
        sol[count].buy = i++;
 
        // Find Local Maxima.  Note that the limit is (n-1) as we are
        // comparing to previous element
        while ((i < n) && (price[i] >= price[i-1]))
            i++;
 
        // Store the index of maxima
        sol[count].sell = i-1;
 
        // Increment count of buy/sell pairs
        count++;
    }
 
    // print solution
    if (count == 0)
        printf("No Profit");
    else
    {
       for (int i = 0; i < count; i++)
          printf("(%d %d) ", sol[i].buy, sol[i].sell);
    }
    printf("\n");
    return;
}
 
// Driver program to test above functions
int main()
{   
    
    int price[10000],n,i,T;
    
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&price[i]);
    // fucntion call
    stockBuySell(price, n);
    }
    return 0;
}
*/
int main()
 {
	int t;
	cin>>t;
	while(t--){
      long long int i=0,n,m,s,c=0,c1=0,c2=0,j=0,flag=0;
      cin>>n;
      // vector<long long int> v(n);
      int *a = new int[n];
      for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(i=0;i<n-1;i++)
       {
         
            if(a[i] < a[i+1] && flag==0 && i<n)
            {
             cout<<"("<<i<<" ";
             flag = 1;
            c++;
                
            }
            else if(a[i] > a[i+1] && flag==1)
            { 
              cout<<i<<")"<<" ";
              flag=0;
            c++;
                
            }
            
       }
           if(flag==1)
            { 
                cout<<n-1<<")"<<" ";
               c++;
            } 
            if(c==0)
             cout << "No Profit"<<endl;
       delete [] a;
       cout << endl;
  	}
	return 0;
}
