class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        int res = -1;
        unordered_map<int,int> mpp;
        for(int i = 0; i < n; i++){
            mpp[arr[i]]++;
        }
        
        
        for(auto it : mpp){
            if(it.second > n/2){
                res =  it.first;
            }
        }
        
        return res;
    }
};