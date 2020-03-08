
/* The below method print the required sum of polynomial
p1 and p2 as specified in output  */
#include <map>
void addPolynomial(Node *p1, Node *p2)
{
    //Your code here
   if(p1==NULL && p2==NULL)
   {
       return ;
   }
   else 
   {
       map<int,int> mp;
       while(p1)
       {
           mp[p1->pow] += p1->coeff; 
           p1=p1->next;
       }
       while(p2)
       {
           mp[p2->pow] += p2->coeff; 
           p2=p2->next;
       }
       //it=mpp.crbegin();
       int flag=0;
       for(auto it = mp.crbegin(); it != mp.crend(); it++)
        {       
            if(flag==0)
           {
                   cout<<mp[it->first]<<"x"<<"^"<<it->first; 
                   flag=1;
           }
           else
           {
              cout<<" "<<"+"<<" ";
             cout<<mp[it->first]<<"x"<<"^"<<it->first; 
            }
            //it++;
       }
   }
    
}
