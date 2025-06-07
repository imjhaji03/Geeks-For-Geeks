// User function Template for C++

class Solution {
  public:
    bool isPalindrome(int n) {
        
        int rev = 0;
        int temp = n;  
        // here temp = n as we will need n in the last step to equate 
        // and while loop operations acn be performed in temp 
        while(temp != 0){
            int num = temp%10;
            rev = rev * 10 +num;
            temp = temp/10;
            
        }
        return (rev == n);
        
    }
};