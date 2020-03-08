/*
Given a binary tree, connect the nodes that are at same level.
Structure of the given Binary Tree node is like following.

struct Node
{
      int data;
      Node* left;
      Node* right;
      Node* nextRight;
}
Initially, all the nextRight pointers point to garbage values. Your function should set these pointers to point next right for each node.
       10                       10 ------> NULL
      / \                       /      \
     3   5       =>     3 ------> 5 --------> NULL
    / \     \               /  \           \
   4   1   2          4 --> 1 -----> 2 -------> NULL
*/
#include <queue>
void connect(Node *p)
{
 
    queue<Node*> q;
    q.push(p); 
    while(!q.empty()) 
    {
        int size=q.size();
        Node *temp=NULL;//q.top();
        Node *ne=NULL;
        //q.pop();
        while(size>0)
        {
             ne=q.front();
           
            if(ne->left!=NULL)
              q.push(ne->left);
            if(ne->right!=NULL)
              q.push(ne->right);
            if(temp==NULL)
             { temp=ne;
             
                 temp->nextRight=NULL;
             }
             else
             {
               temp->nextRight=ne;
               temp=temp->nextRight;
               //cout<<"--temp->nextR"<<" ";
             }
            q.pop();
            
            size--;
        }
    }
    return ;
   // Your Code Here
}

