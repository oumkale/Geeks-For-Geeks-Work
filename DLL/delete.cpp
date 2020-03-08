
void deleteNode(Node **head, int x)
{ 
  //Your code here
   Node *temp=*head;
   
   if(*head==NULL)
     return ;  
     Node *t=*head;
    if(x == 1)
    {
            t=temp->next;
            temp->next->prev=NULL;
            temp=t;
            *head=temp;
            return;
            
    }
    x--;
    while(x--)
    {
        temp=temp->next;
        if(temp==NULL && x>1)
          return;
        
    }
    if(temp->next==NULL)
    {
        temp->prev->next=temp->next;
        temp->next=NULL;
        return ;
        
    }
    
    
       temp->next->prev=temp->prev;
       temp->prev->next=temp->next; 
    
        return ;
        
    
}
