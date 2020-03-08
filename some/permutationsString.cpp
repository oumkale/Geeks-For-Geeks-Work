#include<iostream>
#include<algorithm>
using namespace std;
void perm(string s,bool val)
{
    if(val==true) cout<<s<<" ";
    if(val==false) 
      return;
    val=next_permutation(s.begin(),s.end());
    perm(s,val);
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    bool val=true;
	    sort(s.begin(),s.end());
	    perm(s,val);
	    cout<<endl;
	}
	return 0;
}
