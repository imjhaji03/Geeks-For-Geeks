class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        int p = arr.size();
        
        int i = 0;
        int j = 0;
        int sum = 0;
        
        while(j < k){
            sum = sum +arr[j];
            j++;
        }
        
        int max_sum = sum;
        
        while(j < p){
            sum = sum + arr[j];
            sum = sum - arr[i];
            i++;
            j++;
            max_sum = max(max_sum, sum);
        }
        
        return max_sum;
        
        
        
        
    }
};