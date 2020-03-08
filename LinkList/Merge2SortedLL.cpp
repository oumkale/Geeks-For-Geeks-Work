Node *create(Node *head, int data)
{
    if(head==NULL)
    {
        Node* node = new Node(data);
        head=node;
    }
    else if(head->next==NULL)
    {
       head ->next =new Node(data);     
    }
    else
    {
         Node *temp=head;
         while(temp->next != NULL)
         {
           temp=temp->next;    
         }
         temp->next=new Node(data);
    }  
    return head;
    
}
Node* sortedMerge(Node* head1,   Node* head2)
{
    // Your Code Here
    Node *head=NULL;
    
    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data > head2->data)
        {
            head = create(head, head2->data);
            head2 = head2->next;
        }
        else
        {
            head = create(head, head1->data);
            head1 = head1->next;
        }    
    } 
    while(head1!=NULL)
    {
            head = create(head, head1->data);
            head1 = head1->next;
    }
    while(head2!=NULL)
    {
            head = create(head, head2->data);
            head2 = head2->next;
    }
    return head;
}

