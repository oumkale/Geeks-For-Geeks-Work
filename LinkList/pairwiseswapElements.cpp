#include <iostream>
using namespace std;
Node* pairWiseSwap(struct Node* head) 
{
    // The task is to complete this method
    if(head==NULL || head->next==NULL)
       return head;
    Node *temp = NULL, *hh = NULL, *pre = head;
    temp = head;
    Node *h1 = head;
    int p = 0;
    Node *h2 = head; 
    while(temp!= NULL)
    {       
         h1 = temp;
         h2 = temp->next;
         temp = h2->next; 
         //cout<<h1->data<<" "<<h2->data<<endl;
         h2->next = h1;
         h1->next = temp;
         if(hh == NULL)
            hh = h2;
         
         if(p != 0)
         {
           pre->next = h2;
           pre = h1;
             
         }
         if(temp==NULL || temp->next==NULL)
          break;
             p++;
    }
    return hh;
}
