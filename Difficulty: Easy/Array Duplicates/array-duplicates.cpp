class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> result;
        unordered_map<int,int> mpp;
        for(int i = 0; i < n; i++){
            mpp[arr[i]]++;
        }
        
        for(auto it : mpp){
            if(it.second > 1){
                result.push_back(it.first);
            }
        }
        return result;
    }
};