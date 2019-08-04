struct Solution {
  string countAndSay(int A) {
       string toreturn = "1";
    for(int j=2;j<=A;j++)
    {
        string temp = toreturn;
        string str = "";
        for(int i=0;i<temp.length();i++)
        {
            char ch = temp[i];
            int count  =0;
            while(i<temp.length()&&temp[i]==ch)
            {
                count++;
                i++;
            }
            str+='0'+count;
            str+=ch;
            i--;
        }
        toreturn = str;
           }
    return toreturn;
      /* write your solution here */
  }
};