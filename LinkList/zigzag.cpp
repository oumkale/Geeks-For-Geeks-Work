Node *zigZack(Node* head)
{
 // your code goes here
 if(head == NULL || head->next == NULL)
     return head;
 Node *temp = NULL;
 Node *t=head->next;
 Node*t1,*t2,*t3;
 int c = 1;
 Node*prev=head;
 while(prev!=NULL && t!=NULL)
 {
     if(prev->data > t->data)
     {
         swap(prev->data,t->data);
     }
     if(t->next==NULL)
      return head;
     prev=prev->next;
     t=t->next;
    if(prev->data < t->data)
     {
         swap(prev->data,t->data);
     } 
     prev=prev->next;
     t=t->next;
 }
 return head;
 
}
