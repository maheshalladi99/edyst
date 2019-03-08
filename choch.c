struct Solution {
  void Met(int chocoloates, bool is_weekend) {
      /* write your solution here */
         if(is_weekend == false)
         {
             if(chocoloates>=20 && chocoloates<=40)
             {
                 cout<<"true"<<"\n";
             }
             else
             {
                 cout<<"false"<<"\n";
             }
         }
         else 
         {
            if(chocoloates>=20)
            {
                 cout<<"true"<<"\n";
            }
             else
             {
                 cout<<"false"<<"\n";
             }
         }
  }
};