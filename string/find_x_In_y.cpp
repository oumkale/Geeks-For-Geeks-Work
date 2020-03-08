/*
Implement strstr
Your task is to implement the function strstr. The function takes two strings as arguments (s,x) and  locates the occurrence of the string x in the string s. The function returns and integer denoting the first occurrence of the string x in s.


*/
int strstr(string s, string x)
{
    if(s.size() < x.size())
      return -1;
      int k=0,j;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==x[k])
        {
            if(k==0)
              j=i;
            k++;
        
            if(k==x.size())
              return j;
        }
        else
         k=0;
        
    }
    return -1;
     //Your code here
}

