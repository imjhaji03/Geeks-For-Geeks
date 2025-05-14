//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        int max1 = arr[0];
        int max2 = -1;
        
        for(int i = 1; i < n; i++){
            if(arr[i] > max1){
                max2 = max1;
                max1 = arr[i];
                
            }
            else if(arr[i] < max1 && arr[i] > max2){
                max2 = arr[i];
            }
        }
        return max2;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends