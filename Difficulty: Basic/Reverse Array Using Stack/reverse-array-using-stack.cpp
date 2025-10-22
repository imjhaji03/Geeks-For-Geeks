// User function Template for C++

// Complete this function
class Solution {
  public:
    void reverseArray(vector<int>& arr) {
        
        int n = arr.size();
        
        stack<int> st;
        
        for(auto it : arr){
            st.push(it);
        }
        
        while(!st.empty()){
            
            for(int i = 0; i < n; i++){
                arr[i] = st.top();
                st.pop();
            }
        }
    }
};