Given an integer K and a queue of integers, we need to reverse the order of the first K elements of the queue, leaving the other 
elements in the same relative order.

Only following standard operations are allowed on queue.

enqueue(x) : Add an item x to rear of queue
dequeue() : Remove an item from front of queue
size() : Returns number of elements in queue.
front() : Finds front item.

Example:
Input:
2
5 3
1 2 3 4 5
4 4
4 3 2 1
Output:
3 2 1 4 5
1 2 3 4

Explanation:
Testcase 1: After reversing the given input from the 3rd position the resultant output will be 3 2 1 4 5.
Testcase 2: After reversing the given input from the 4th position the resultant output will be 1 2 3 4.

queue<ll> modifyQueue(queue<ll> q, int k)
{
    //add code here.
    stack<ll> s1;
    stack<ll> s2;
  
    while(!q.empty())
    {
        s1.push(q.front());
        q.pop();
    }
    int x=s1.size();
    for(int i=0;i<x-k;i++)
    {
        s2.push(s1.top());
        s1.pop();
    }
    while(!s1.empty())
    {
        q.push(s1.top());
        s1.pop();
    }
      while(!s2.empty())
    {
        q.push(s2.top());
        s2.pop();
        
    }
    return q;
}
