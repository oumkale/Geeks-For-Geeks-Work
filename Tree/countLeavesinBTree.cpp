int countLeaves(Node* root)
{ 
    if(root->left==NULL && root->right==NULL)
    {
      return 1;
    }
    return countLeaves(root->left)+countLeaves(root->right);
  ;
    
  // Your code here
}

