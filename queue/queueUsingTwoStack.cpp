int StackQueue :: pop()
{
        int m=s1.size(),top;
        int n=0;
         if(s2.empty())
         {
            if(s1.empty())
            {
                return -1;
            } 
            else
            {
                while(s1.size())
                {
                     s2.push(s1.top());
                     s1.pop();
                }
                top = s2.top();
                s2.pop();
                return top;
            }
         }
         else
         {
               top = s2.top();
                s2.pop();
                return top;
         }         // Your Code       
}

