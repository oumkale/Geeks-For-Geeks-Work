void printCommon(Node *root1, Node *root2)
{
     stack<Node*> stck,s1,s2;
     while(1)
     {
         while(root1)
         {
             s1.push(root1);
             root1=root1->left;
         }
         while(root2)
         {
             s2.push(root2);
             root2=root2->left;
         }
         if(!s1.empty() && !s2.empty())
         {
             root1=s1.top();
             root2=s2.top(); 
             if(root1->data == root2->data)
             {
                 cout<<root1->data<< " ";
                 s1.pop();
                 s2.pop();  
                 root1 = root1->right;
                 root2 = root2->right;
             }
             else if(root1->data < root2->data)
             {
                   s1.pop();
                   root1=root1->right;
                   root2=NULL;
             }
             else if(root1->data > root2->data)
             {
                   s2.pop();
                   root2=root2->right;
                   root1=NULL;
             }
         }
         else 
          break;
     }
     //Your code here
}

