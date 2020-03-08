void MyQueue:: push(int x)
{
     
        QueueNode * temp=new QueueNode(x);
        if(front == NULL)
        {
            front = temp;
            rear  = temp;
        } 
        else
        {
            rear->next = temp;
            rear=rear->next;
        }
            
        // Your Code
}
int MyQueue :: pop()
{
       int d;
        // Your Code
        if(front == NULL)
          return (-1);
        else
        {  
            d = front -> data;
            QueueNode * t= front;
            front = front -> next;
            delete t;
        }
        return d;
}

