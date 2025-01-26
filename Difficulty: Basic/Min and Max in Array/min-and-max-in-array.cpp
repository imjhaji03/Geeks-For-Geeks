//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        int n = arr.size();
        
        int smallest = arr[0];
        for(int i = 0; i < n; i++){
            if(arr[i]<smallest){
                smallest = arr[i] ;
            }
        }
        int largest = arr[0];
        for(int i = 0; i < n; i++){
            if(arr[i]>largest){
                largest = arr[i];
            }
        }
        return{smallest,largest};
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
        pair<int, int> pp = ob.getMinMax(arr);
        cout << pp.first << " " << pp.second << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends