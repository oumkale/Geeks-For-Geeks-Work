int dataSum(Node *root)
{
    if(root==NULL)
        return 0;
    return max(dataSum(root->left), dataSum(root->right))+root->data;
}
int sum(Node *root)
{
   if(root==NULL)
      return 0;
   return max(dataSum(root->left)+dataSum(root->right)+root->data, max(sum(root->left),sum(root->right)));
}
int maxPathSum(struct Node *root)
{
    return sum(root);
}


