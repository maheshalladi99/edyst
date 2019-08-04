struct Solution {
  string intToRoman(int A) {
      int n[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};   
    string r[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    auto i = 0;
    string result = "";
    
    while (A!=0)
    {
        while (A>=n[i])
        {
            result += r[i];
            A -= n[i];
        }
        ++i;
    }
    return result;
      /* write your solution here */
  }
};