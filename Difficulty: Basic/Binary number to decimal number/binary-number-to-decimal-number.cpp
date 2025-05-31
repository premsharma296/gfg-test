class Solution {
  public:
    int binaryToDecimal(string &b) {
      int n=b.length()-1;
      int decimal=0;
      int power=0;
      for(int i=n;i>=0;i--)
      {
          if(b[i]=='1')
          {
              decimal+=pow(2,power);
           
          }
             power++;
      }
      return decimal;
    }
};