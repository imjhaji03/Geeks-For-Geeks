class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int> res;
        set<int> s;
        
        for(int i = 0; i < arr.size(); i++){
            s.insert(arr[i]);
            
        }
        
        for(auto it : s){
            res.push_back(it);
        }
        
        return res;
        
    }
};