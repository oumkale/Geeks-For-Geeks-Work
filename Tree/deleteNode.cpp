Node *deleteNode(Node *root,  int x)
{
    if(root==NULL)
      return root;
    if(x < root->data)
      root->left=deleteNode(root->left,x);
    if(x > root->data)
      root->right=deleteNode(root->right,x);
    if(root->data == x)
    {
        if(root->right==NULL)
        {
            Node* temp = root->left;
		    root->left = NULL;
		    delete root;
		    return temp;
            
        }
        else if(root->left==NULL)
        {
            Node* temp = root->right;
		    root->right = NULL;
		    delete root;
		    return temp;
        }
        else if(!root->left && !root->right)
        {
            return NULL;
        }
        else
        {
            Node* minNode = root->right;
		    while (minNode->left != NULL) 
		    minNode = minNode->left;
        
            root->data = minNode->data;
        
            root->right = deleteNode(root->right,minNode->data);
        
        }
        return root;
        
    }
    // your code goes here
    return root;
    //return roo
}
