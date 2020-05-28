void max_of_subarrays(int *ar, int n, int k){
    // your code here
     
   deque<int> q(k);
   for(int i=0;i<k;i++)
   {
       while(!q.empty() && ar[i]>ar[q.back()])
       {
           q.pop_back();
       }
      q.push_back(i);
   }
  for(int i=k;i<n;i++)
  {
      cout<<ar[q.front()]<<" ";
      
      while(!q.empty() && (q.front()<=i-k))
      {
          q.pop_front();
      }
      
      while(!q.empty() && ar[i]>ar[q.back()])
       {
           q.pop_back();
       }
      
      q.push_back(i);
  }
  
  cout<<ar[q.front()];
}
