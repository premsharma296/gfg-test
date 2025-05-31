class Solution {
  public:
    string isVowel(char c) {
        // code here
        c=tolower(c);
        if(c=='a'|| c=='e'|| c=='i'|| c=='o' || c=='u')
        {
            return "YES";
        }
        return "NO";
    }
};