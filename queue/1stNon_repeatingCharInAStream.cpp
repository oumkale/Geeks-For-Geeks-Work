/*
First non-repeating character in a stream
*/
#include<iostream>
#include <queue> 
#include <vector>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)  
     {
         int n;
         char m;
         cin>>n;
         queue<char> q;
         vector<char> x;
         int ch[26]={0};
         for(int i=0;i<n;i++)
         {   
             cin>>m;
             x.push_back(m);
             //cout << x[i];
         }
         for(int i=0;i<n;i++)
         {
             ch[x[i]-'a']++;
             q.push(x[i]);
             while(!q.empty()) 
             {
                if(ch[q.front()-'a'] > 1)
                {
                   q.pop();
                }
                else 
                {
                   cout << q.front()<<" ";
                   break;
                    
                }
             }      
             if(q.empty())
              cout << -1<< " ";
         }
        cout << endl; 
     }  
	//code
	return 0;
}
