#include <set>
void inorderSet(Node* root,set<int> &s)
{
    if(root==NULL)
     return;
    inorderSet(root->left,s);
    s.insert(root->data);
    inorderSet(root->right,s);
}
void bst(Node* root, set<int> &s) 
{
    if(root==NULL)
     return;
    bst(root->left,s);
    auto it = s.begin();
    root->data = *it;
    s.erase(it);
    bst(root->right,s);
}
Node *binaryTreeToBST (Node *root)
{
    set<int> s;
    inorderSet(root,s);
    bst(root,s);
    return root;
//Your code here
}
