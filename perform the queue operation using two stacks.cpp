void StackQueue :: push(int x)
 {
        // Your Code
    s1.push(x);
 }

/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
        // Your Code    
   if(s1.empty())
    return -1;
  
   while(!s1.empty())
   {
       int x=s1.top();
       s2.push(x);
       s1.pop();
   }
  int z=s2.top();
  s2.pop();
  while(!s2.empty())
  {
       int y=s2.top();
       s1.push(y);
       s2.pop();
  }

return z;
}
