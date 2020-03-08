void removeTheLoop(Node *head)
{
     //Your code here
     //1 8 3 4
     struct Node *ss;
     map<Node*,int> mp;
     set<Node*> sss; 
     int d,flag=0;
     
     Node *temp=head;
     Node *s=head;
     while(temp->next)
     {
         
         if(sss.find(temp) != sss.end())
         {
          s->next=NULL;
         // cout << (1) << endl;
          flag=1;
          break;
         }
         else
           sss.insert(temp);
        s=temp;
        temp=temp->next;
     }
    return ;
}


