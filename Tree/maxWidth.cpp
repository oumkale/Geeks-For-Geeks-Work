#include <queue>
#include <stack>
int getMaxWidth(Node* root)
{
    if(root == NULL)
      return 0;
      
    int s=0; 
    queue<Node*> qu;
    qu.push(root);
    int ma=1,c=0;
    while(!qu.empty())  
    {
         s = qu.size();
         while(s--)
         {
            Node * temp= qu.front();
            qu.pop();
            c++;
            if(temp->left)
             qu.push(temp->left);
            if(temp->right)
             qu.push(temp->right);  
         }
         if(c>ma)
           ma=c;
           c=0;
    }
    return ma;
   // Your code here
}


