#include <map>
#include <vector>
#include <utility>
#include <queue>
void verticalOrder(Node *root)
{ 
    //Your code here
    if(root == NULL)
      return ; 
    map<int,vector<int>> mp;
    int hd=0;
    queue<pair<Node*,int>> qq;
    qq.push(make_pair(root,hd));
    while(!qq.empty())
    {
       pair<Node*, int> te = qq.front();
       Node *temp = te.first;
       hd = te.second;
       qq.pop();
       mp[hd].push_back(temp->data);
       if(temp->left != NULL)
       {
         qq.push(make_pair(temp->left,hd-1));
       }
       if(temp->right != NULL)  
       { 
            
           qq.push(make_pair(temp->right,hd+1));    
       }
    }  
    map<int,vector<int>>::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
      for(int i=0;i<it->second.size();i++)
        cout << it->second[i]<<" ";
       // cout << endl;
    }
    
    return ;
}
