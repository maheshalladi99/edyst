struct Solution {
  void Met(int n) {
      /* write your solution here */
      int i,factorial=1;
       for(i=1; i<=n; ++i)
        {
            factorial *= i;             
        }
       cout<<n<<"!"<<" = "<<factorial;
       cout<<"\n";
  }
};