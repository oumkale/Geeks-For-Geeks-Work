/*
Stack using two queues
Implement a Stack using two queues q1 and q2.
*/
void QueueStack :: push(int x)
{
        
        q1.push(x);// Your Code
}

int QueueStack :: pop()
{
        int m=q1.size(),top;
        int n=0;
         
            if(q1.empty())
            {
                return -1;
            } 
            else
            {
                while(q1.size() != 1)
                {
                    q2.push(q1.front());
                    q1.pop();
                } 
                top = q1.front();
                q1.pop();
                queue<int> q3;
                q3 = q1;
                q1 = q2;
                q2 = q3;
                return top;
            }
         }
}
