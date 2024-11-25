//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sort012(vector<int>& arr) {
    int zerocount = 0;
    int onecount = 0;
    int twocount = 0;

  
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 0) {  
            zerocount++;
        } else if (arr[i] == 1) {
            onecount++;
        } else if (arr[i] == 2) {
            twocount++;
        }
    }

    int index = 0;


    while (zerocount--) {
        arr[index] = 0;  
        index++;
    }


    while (onecount--) {
        arr[index] = 1;  
        index++;
    }


    while (twocount--) {
        arr[index] = 2;  
        index++;
    }
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends