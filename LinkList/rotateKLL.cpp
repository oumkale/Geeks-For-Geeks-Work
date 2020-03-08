Node* rotate(Node* head, int k) {
    // Your code here
    Node *temp=head;
    int c=k,flag=0;
    Node *sss=head;
    
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    k=c-1;
    temp->next=head;
    while(k--)
    {
         sss=sss->next;
    }
       
    head = sss->next;
    sss->next=NULL;
     return head;        
}

