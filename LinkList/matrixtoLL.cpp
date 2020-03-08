// n is the size of the matrix
// function must return the pointer to the first element 
// of the in linked list i.e. that should be the element at arr[0][0]
Node* constructLinkedMatrix(int mat[MAX][MAX], int n)
{
    // code here
    int i=0,j=0,k=0;
    Node *head=NULL,*tail=NULL,*hh=NULL,*hhh=NULL;
    Node* node=NULL;
    for(i=0;i<n;i++) 
    {
        head=NULL;
       
        for(j=0;j<n;j++)
        { 
            node = new Node(mat[i][j]);
            if(head == NULL)
            { 
                if(hh==NULL)
                 { hh=node; 
                 
                     hhh=hh;
                 }
                head=node;
                tail=node;
            }
            else
            {
              tail->right=node;
              tail=tail->right;
            }  
        }
        Node *temp=hhh;
       if(i>0)
       {
           for(j=0;j<n;j++)
           {
               hhh->down=head;
               hhh=hhh->right;
               head=head->right;
           }
           hhh=temp;
           hhh=hhh->down;
       }
    }
    return hh;
}

