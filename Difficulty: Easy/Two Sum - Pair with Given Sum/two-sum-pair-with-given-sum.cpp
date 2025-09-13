class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        int i = 0;
        int j = n-1;
        
        sort(arr.begin(),arr.end());
        
        while(i < j){
            if(arr[i] + arr[j] > target){
                j--;
            }
            else if(arr[i] + arr[j] < target){
                i++;
            }
            else{
                return true;
            }
        }
        
        return false;
        
    }
};