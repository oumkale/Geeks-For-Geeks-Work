Node *removeDuplicates(Node *root)
{
    if(root==NULL)
     return root;
     Node *head = root;
     int flag=0;
     int data = root->data;
     while(root->next!=NULL)
     {
         if(root->data==root->next->data)
              root->next=root->next->next;
         else
            root=root->next;
     }
     return head;
 // your code goes here
}
