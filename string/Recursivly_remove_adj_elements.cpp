/*
Recursively remove all adjacent duplicates
Given a string s, recursively remove adjacent duplicate characters from the string s. The output string should not have any adjacent duplicates.
*/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
string removedup(string str)
{
    
        string temp = "";
  
        if(str[0] != str[1])
          temp+=str[0]; 
          int i=1;
          int n= str.size();
       while(i<n)
       {
           if(str[i-1] != str[i] && str[i] != str[i+1])
            temp += str[i];
            i++;
      }
      if(temp.size()==0)
         return temp;
      if(temp.length()!=str.length())
        {
            return removedup(temp);
        }
     return temp;

}
int main() {
	//code
	int t;
	cin>>t;
//	cin>>ws;
	while(t--)
	{
	     string str,temp="";
	     cin>>str;
	     int n= str.size();
	    
	     temp = removedup(str);
	     cout <<temp<<endl;
	}   
	return 0;
}
