class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        vector<int> result;
        int n = arr.size();
        if (n == 0) return result;

        result.push_back(arr[0]);
        for(int i = 1; i < n; ++i){
            if(arr[i] != arr[i-1]){
                result.push_back(arr[i]);
            }
        }
        return result;
    }
};
