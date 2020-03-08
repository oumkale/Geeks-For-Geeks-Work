#include <map>
#include <queue>
#include <vector>
int verticalWidth(Node* root)
{
    if(root==NULL)
     return 0;
     map<int,vector<int>> mp;
     int h=0;
     queue<pair<Node*,int>> q;
     q.push(make_pair(root,h)); 
     int ma=0,c=0;
     while(!q.empty())
     {
            pair<Node*,int> te = q.front();
            h=te.second;
            Node *temp = te.first; 
            q.pop();
            mp[h].push_back(temp->data);
            
             if(temp->left != NULL)
              q.push(make_pair(temp->left,h-1));
             if(temp->right!=NULL)
              q.push(make_pair(temp->right,h+1)); 
     
     }
     map<int,vector<int>>::iterator it=mp.begin();
    /* while(it != mp.end())
     {
         c = it->second.size();   
         if(c > ma)
           ma=c;
         it++;
     }
     */
     ma = mp.size();
    // Code here
    return ma;
}
