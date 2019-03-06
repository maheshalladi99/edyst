struct Solution {
  void Met(int N) {
      /* write your solution here */
      int i,j,k=2*N+1,h;
      for(i=0;i<k;i++)
      { 
          h=i;
        if(i>N)
            h=k-i-1;
        for(j=0;j<h+1;j++)
            cout<<"*";
        for(j=0;j<(k-2*h-2);j++)
            cout<<".";
         if(i==N)
         h--;
         for(j=0;j<h+1;j++)
         cout<<"*";
         cout<<endl;
         }
  }
};