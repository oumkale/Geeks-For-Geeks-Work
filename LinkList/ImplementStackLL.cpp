void MyStack ::push(int x) {
    // Your Code
        StackNode * te = new StackNode(x);
        
        if(top == NULL)
        {
            top = te;
        } 
        else
        {  
            StackNode * temp=top;
            te->next = top;
            top = te;
        }
        
}

/* The method pop which return the element
  poped out of the stack*/
int MyStack ::pop() {
    // Your Code
    int d;
    if(top == NULL)
          return (-1);
    else
    {
            StackNode * temp=top;
            d = temp->data;
           top=top->next;
           delete temp;
        
    }
    return d;       
}
