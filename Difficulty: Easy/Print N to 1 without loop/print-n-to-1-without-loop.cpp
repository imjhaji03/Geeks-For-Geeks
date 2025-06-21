
class Solution {
  public:
    void printNos(int N) {
        int i = N;
        if(N == 0){
            return;
        }
        cout<<i<<" ";
        printNos(N-1);
    }
};

