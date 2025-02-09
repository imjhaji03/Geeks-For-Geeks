//{ Driver Code Starts
// Initial Template for C++

// {Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int dataTypeSize(string str) {
        if (str =="Character"){
            return 1;
        }
        if (str =="Integer"){
            return 4;
        }
        if (str =="Long"){
            return sizeof(long);
        }
        if (str =="Float"){
            return sizeof(float);
        }
        if (str =="Double"){
            return sizeof(double);
        }
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends