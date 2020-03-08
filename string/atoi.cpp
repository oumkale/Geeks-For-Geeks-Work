/*
Your task  is to implement the function atoi. The function takes a string(str) as argument and converts it to an integer and returns it.
*/
int atoi(string str)
{
    int r=0;
    int val,flag=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='-')
        {
            flag=1;
            continue;
        }
        val = (str[i]-'0');
        r += val;
        
        if(i <str.size()-1)
        r =r*10;
        if(str[i]>'9' || str[i] <'0')
        return -1;
         
    }
    if(flag==1)
    return -r;
    else
    return r;
    //Your code here
}
