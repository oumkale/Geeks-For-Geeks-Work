#include <queue>
#include <stack>
int getLevelDiff(Node *root)
{
   //Your code here
   if(root == NULL)
      return 0;
      
    int s=0; 
    queue<Node*> qu;
    qu.push(root);
    int ma=1,c=0;
    int so=0;
    int se=0;
    int flag=0;
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
              if(flag == 0)
                so += temp->data;
              if(flag == 1)
                se += temp->data;
                      
           }
           flag = !flag;
          
    }
    return so-se;
   // Your code here
}




