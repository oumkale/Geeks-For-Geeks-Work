int minValue(Node* root)
{
    // Code here
    if(root->left==NULL)
      return root->data;
    int a = minValue(root->left);  
}

