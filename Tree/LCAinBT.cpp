/*
If n1 and n2 are present, return pointer
   to LCA. If both are not present, return 
   NULL. Else if left subtree contains any 
   of them return pointer to left.*/
*/
Node* lca(Node* root ,int n1 ,int n2 )
{
    
   //Your code here 
   if(root == NULL)
    return root;
    Node *l, *r;
    if(root->data ==n1 || root->data==n2)
      return root;
     l = lca(root->left,n1,n2);
     r = lca(root->right,n1,n2);
    if(l!=NULL && r!=NULL)
    {
        return root;
    }
    if(l==NULL)
     return r;
    else
     return l;
}
