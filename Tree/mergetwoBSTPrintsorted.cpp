
#include <bits/stdc++.h>
void inorder(Node *root,vector<int> &v)
{
   if(root == NULL)
     return ;
    inorder(root->left,v);
     v.push_back(root->data);
    inorder(root->right,v);
     
}
void merge(Node *root1, Node *root2)
{
    vector<int> v;
    inorder(root1,v);
    inorder(root2,v);
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
      cout<<v[i]<<" ";
   //Your code here
}
