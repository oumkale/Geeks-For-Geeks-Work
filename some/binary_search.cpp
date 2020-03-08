
int bin_search(int a[], int left, int right, int k)
{
   if(left > right )
    return -1;
    int val;
    int mid = (left+right)/2;
    
   if(k ==  a[mid])
   {
        return mid;
   }
   if(k >  a[mid])
     val = bin_search(a,mid+1,right,k);
   else     
     val = bin_search(a,left,mid-1,k);
   
    return val;

    
}
