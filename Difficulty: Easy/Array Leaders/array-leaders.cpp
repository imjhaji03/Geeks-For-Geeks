

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        vector<int> result;
        int max_ele = arr[arr.size()-1];
        result.push_back(max_ele);
        for(int i = arr.size()-2; i >= 0; i--){
            if(arr[i] >= max_ele){
                max_ele = arr[i];
                result.push_back(arr[i]);
                
            }
        }
        
        reverse(result.begin(),result.end());
        
        return result;
    }
    
};