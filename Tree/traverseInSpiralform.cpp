
#include <stack>
void printSpiral(Node *root)
{ 
  if (root == NULL) 
        return; 
  
   
    stack<Node*> s1;
    stack<Node*> s2;  
  
   
    s1.push(root); 
  
   bool flag=true;
    while (true) 
    { 
        
         while (!s1.empty())
         { 
            Node* temp = s1.top(); 
            s1.pop(); 
            cout << temp->data << " "; 
          if(flag)
           {
            if (temp->right) 
                s2.push(temp->right); 
            if (temp->left) 
                s2.push(temp->left); 
            }
          else
              {
               if (temp->left) 
                 s2.push(temp->left); 
               if (temp->right) 
                 s2.push(temp->right);
            }
       } 
        
     if(s1.empty() && s2.empty())
      break;
      flag = !flag;
         
       s1.swap(s2);
    } 
}
