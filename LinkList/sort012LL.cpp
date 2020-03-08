Node* segregate(Node *head) 
{
    int c0=0,c1=0,c2=0,t,l;
    int a[3]={0};
    Node *temp=head;
    Node *te = head;
    while(temp)
    {
        t = temp -> data;
        a[t]++;
        temp = temp -> next;
    }
    t=0;
    while(te)
    {
        if(a[t]--)
        {
            te->data = t;
            te=te->next;
        }
        else
         t++;
    }
    return head;
    // Add code here
    
}
