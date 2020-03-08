/*
Roman Number to Integer
Given an string in roman no format (s)  your task is to convert it to integer .
*/
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int roman(char s)
{
    if(s=='I')
      return 1;
    else if(s=='V')
      return 5;
    else if(s=='X')
      return 10;
    else if(s=='L')
      return 50;
    else if(s=='C')
      return 100;
    else if(s=='D')
      return 500;
    else if(s=='M')
      return 1000;
    else
     return -1;
     
      
}
int get_roman_val(string s)
{
    int val,r=0,x,y;
    int n= s.size();
  for(int i=0;i<s.size();i++)
  {
      if(i==n-1)
      {
          x = roman(s[i]);
          r += x;
          return r;
      }
      else
      {
          x = roman(s[i]);
          y = roman(s[i+1]);
          if(x<y)
           r-=x;
           else
           r+=x;
      }
  }
    return val;
}
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int val = get_roman_val(s);
	    cout << val <<endl;
	}
	return 0;
}
