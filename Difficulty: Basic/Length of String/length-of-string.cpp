// User function Template for C++

class Solution {
  public:
    int lengthString(string &s) {
        int count = 0;
        int i = 0;
        
        while(s[i] != '\0'){
            count++;
            i++;
        }

        return count;
        
    }
};