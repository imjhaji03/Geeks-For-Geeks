class Solution {
    public int greatestOfThree(int a, int b, int c) {
        // code here
       int maxnum =  Math.max(a, Math.max(b,c));
        return maxnum;    
    }
}
