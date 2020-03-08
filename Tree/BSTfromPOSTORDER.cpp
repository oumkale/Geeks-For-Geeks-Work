Node *create(Node* root,int data)
{
    if(root == NULL)
    {
        Node* ro = new Node(data); 
        ro->left=NULL;
        ro->right=NULL;
        return ro;
    }
    if(root->data > data)  
      root -> left  = create(root->left,data);
    if(root->data < data)
      root -> right = create(root->right,data);
     return root;
} 
Node *constructTree (int post[], int size)
{
    if(size <= 0)
      return NULL;
        
    int ro = post[size-1]; 
    
    int e = size-2; 
    Node* root = new Node(ro); 
    for(int i=0;i<size;i++)
       root = create(root,post[i]);
    return root;
//code here
}
