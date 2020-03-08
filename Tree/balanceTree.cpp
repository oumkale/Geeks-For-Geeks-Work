int height(Node* root){
    if(root==NULL)
      return 0;
      return 1+max(height(root->left),height(root->right));
}
bool isBalanced(Node *root) 
{
    if(root==NULL)
      return true;
     int h = height(root->left)-height(root->right);
     if(abs(h)>1)
       return false;
     bool a = isBalanced(root->left);
     bool b = isBalanced(root->right);
    //  Your Code here
    return a&b;
}
