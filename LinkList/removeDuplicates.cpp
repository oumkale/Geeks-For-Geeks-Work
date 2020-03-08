
#include <unordered_set>
Node * removeDuplicates( Node *head) 
{
 // your code goes here
   if(head==NULL)
     return head;
     Node *temp=NULL,*h=NULL;
     unordered_set<int> s;
     while(head!=NULL)
     {
         if(s.find(head->data)!=s.end())
           ;
         else
         {
              s.insert(head->data);
         
            Node* t=new Node(head->data);
            if(temp==NULL)
            { 
                h=t;
                temp=t;
            }
            else
             {
                 temp->next=t;
                 temp=temp->next;
             }
         } 
         head=head->next;
     }
    return h;
}

