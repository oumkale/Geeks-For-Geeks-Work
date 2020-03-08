#include <climits>
#include <cmath>
int maxi(Node *root)
{
    if(root==NULL)
     {
         return INT_MIN;
     }
     int ma = maxi(root->right);
     return max(ma,root->data);
}
int mani(Node *root)
{
    if(root==NULL)
     {
         return INT_MAX;
     }
     int ma = mani(root->left);
     return min(ma,root->data);
}
bool check(Node* root)
{
    if(root==NULL)
      return true;
      
     bool aa = check(root->left);
     bool bb = check(root->right);
     int ma = maxi(root->left);
     int mi = mani(root->right);
     return (ma < root->data && mi > root->data && aa && bb);
}
bool isBST(Node* root) {
    // Your code here
    if(root==NULL)
     return true;
    
    int a=INT_MAX;
    int b=INT_MIN;
    bool res = check(root);
    return res;
}
