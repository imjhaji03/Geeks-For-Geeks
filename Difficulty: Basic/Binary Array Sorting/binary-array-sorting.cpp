//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void binSort(vector<int> &arr) {
        int n = arr.size();
        int zerocount = 0;
        int onecount = 0;
        for(int i=0; i<n; i++){
            if(arr[i] == 0){
                zerocount++;
            }
            else if(arr[i] == 1){
                onecount++;
            }
            
        }
        
        int index = 0;
        while(zerocount--){
            arr[index] = 0;
            index++;
        }
        while(onecount--){
            arr[index] = 1;
            index++;
        }
        
    }
};


//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after the integer input
    while (t--) {
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num); // Read the array elements from input string

        Solution obj;
        obj.binSort(a);

        for (int i = 0; i < a.size(); i++) {
            if (i != 0)
                cout << " ";
            cout << a[i];
        }
        cout << endl;        // Ensure new line after each test case output
        cout << "~" << endl; // Ensure new line after each test case output
    }

    return 0;
}

// } Driver Code Ends