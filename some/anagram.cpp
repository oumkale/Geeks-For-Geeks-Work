/*
Given two strings a and b consisting of lowercase characters. The task is to check whether two given strings are anagram of each other or not. An anagram of a string is another string that contains same characters, only the order of characters can be different. For example, “act” and “tac” are anagram of each other.
*/
#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	//code
	string a;
	int n,flag=0,ans=0;
	string b;
	cin>>a>>b;
	if(a.size() != b.size())
	{
	    cout << "NO" << endl;
	               flag=1;
	                continue;
	}
	for(int i=0;i<a.size();i++)
	{
	  ans ^= int(a[i]) ^ int(b[i]);
	}
	if(ans==0)
	 cout << "YES" << endl;
	else
	 cout << "NO" << endl;
	}
	return 0;
}

// My Solution
/*
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	//code
	string a;
	int n;
	string b;
	cin>>a>>b;
	char *ch = new char[200];
	map<char,int> mp1;
	map<char,int> mp2;
	for(int i=0;i<a.size();i++)
	{
	    if(mp1[a[i]])
	     mp1[a[i]]++;
	    else
	     mp1[a[i]]=1;
	}
	for(int i=0;i<b.size();i++)
	{
	     if(mp2[b[i]])
	     mp2[b[i]]++;
	    else
	     mp2[b[i]]=1;
	   
	   // n = integer(a[i]);
	    //ch[n]++;
	}
	if(mp1.size() != mp2.size())
	{
	    cout << "NO" << endl;
	    continue;
	}
	std::map<char,int>::iterator it1 = mp1.begin();
	std::map<char,int>::iterator it2 = mp2.begin();
	int flag=0;
	
	while(it1 != mp1.end() || it2 != mp2.end())
	{
	    if(it1->second == it2->second)
	    {
	        ;
	    }
	    else
	    {
	        cout << "NO" << endl;
	        flag=1;
	        break;
	    }
	    it1++;
	    it2++;
	}
	if(flag==0)
	 cout << "YES" << endl;
	}
	return 0;
}
*/
