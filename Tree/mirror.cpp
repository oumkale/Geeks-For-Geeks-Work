void mirror(Node* node) 
{
    if(node == NULL)
     return ;
      
     if(node->left && node->right)
     {
         Node *temp= node->left;
         node->left=node->right;
         node->right=temp;
     }
     else if(node->left)
     {
         node->right=node->left;
         node->left=NULL;
     }
     else if(node->right)
     {
         node->left=node->right;
         node->right=NULL;
     }
     mirror(node->left);
     mirror(node->right);
     return ;
     // Your Code Here
}
