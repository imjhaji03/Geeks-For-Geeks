class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        unordered_map<int, int> mpp;
        bool flag = true;
        
        for(int i = 0; i < b.size(); i++){
            mpp[b[i]]++;
        }
        
        for(int i = 0; i < a.size(); i++){
            mpp[a[i]]--;
        }
        for(auto it : mpp){
            if(it.second > 0){
                flag = false;
            }
        }
        return flag;
    }
};