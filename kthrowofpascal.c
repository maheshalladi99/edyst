struct Solution {
  vector<int> getRow(int A) {
      vector<int> v(A+1);
    if(A==0){
        v[0]=1;
        return v;
    }
    int c=1;
    v[0]=c;
    for(int j=1;j<=A;j++){
        v[j]=c*(A-j+1)/j;
        c=v[j];
    }
    return v;
      /* write your solution here */
  }
};