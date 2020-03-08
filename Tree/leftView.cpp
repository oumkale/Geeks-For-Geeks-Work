void leftView(Node *root)
{
    if(root==NULL)
     return;
    cout<< root->data<<" ";
    if(root->left==NULL && root->right)
     leftView(root->right);
    leftView(root->left);
    return ;
   // Your code here
}
