/*
Given an array arr[] of N non-negative integers representing height of blocks at index i as Ai where the width of each block is 1. Compute how much water can be trapped in between blocks after raining.
*/
int trappingWater(int a[], int n){

    // Your code here
    int leftmax=0;
    int rightmax=0;
    int ans=0;
    int l=0;
    int r=n-1;
    while(l <= r)
    {
        if(a[l] < a[r])
        {
             if(a[l] >= leftmax)
            { 
                leftmax=a[l];
            }
            else
            {
                ans += leftmax-a[l];
                
            }
            l++;
        }    
        else
        {
            
            if(a[r] >= rightmax)
            { 
                rightmax=a[r];
                
            }
            else
            {
                ans += rightmax-a[r];
                
            }
            r--;
        }
    }
    return ans;
}
