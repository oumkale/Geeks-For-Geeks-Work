/*
Longest Distinct characters in string
Given a string S, find length of the longest substring with all distinct characters.  For example, for input "abca", the output is 3 as "abc" is the longest substring with all distinct characters.*/
#include <iostream>
#include <string>
#include <cstring>
#include <map>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	     string str,temp="";
	     cin>>str;
	     int n= str.size();
	       int i=0;
	       int k=0;
	       if(n==1)
	       {
	           cout <<1 << endl;
	           continue;
	       }
	       map<char,int> mp;
	       int ma=-1,m;
	       for(int i=0;i<n;i++)
	       {
	           if(!mp[str[i]])
	             mp[str[i]]=1;
	             if(mp.size()<i-k+1)
	             {
	                 mp.clear();
	                 //m=-1;
	                 i=k++;
	             }
	             m = mp.size();
	             ma = max(ma,m);
	       }
	        cout <<ma<<endl;
	}   
	return 0;
}
