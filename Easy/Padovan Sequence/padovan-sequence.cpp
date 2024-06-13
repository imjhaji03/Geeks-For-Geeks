//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int padovanSequence(int n) {
        if(n<=2) return 1;
        int mod=1e9+7;
       int num1=1, num2=1, num3=1, ans;
       for(int i=0;i<n-2;i++){
           ans=(num2+num3)%mod;
           num3=num2;
           num2=num1;
           num1=ans;
       }
       return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.padovanSequence(n) << endl;
    }
    return 0;
}
// } Driver Code Ends