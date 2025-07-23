class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        
        if(n == 0 || k == 0 || k > n) return 0;
        
        int sum = 0;
        
        for(int i = 0; i < k; i++){
            sum += arr[i];
        }
        
        int l = 0;
        int r = k;
        int maxsum = sum; 
        while(r < n){
            sum -= arr[l];
            sum += arr[r];
            maxsum = max(maxsum,sum);
            l++;
            r++;
        }
        
        return maxsum;
    }
};