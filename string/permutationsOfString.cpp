#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
void palin(string s,bool val)
{
   if(val==false)
     return ;
    else
    {
         cout << s << " ";
         val = next_permutation(s.begin(),s.end());
         palin(s,val);
    }
}
int main() {
	//code
	long long int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    long long int l = str.size();
	    sort(str.begin(),str.end());
	     palin(str,true);
	    cout << endl;
	}
	
	return 0;
}
