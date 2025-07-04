class Solution {
    public:
    int lowerbound(vector<int>& arr, int x){
        int low = 0;
        int high = arr.size()-1;
        int ans = arr.size();
        while(low <= high){
            int mid = low + (high - low)/2;
            if(arr[mid] >= x){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    } 
    public:
    int upperbound(vector<int>& arr, int x){
        int low = 0;
        int high = arr.size()-1;
        int ans = arr.size();
        while(low <= high){
            int mid = low + (high - low)/2;
            if(arr[mid] > x){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
    
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int lb = lowerbound(arr, x);
        int ub = upperbound(arr, x)-1;
        if(lb == arr.size() || arr[lb] != x){
            return{-1,-1};
        }
        
        vector<int> result;
        result.push_back(lb);
        result.push_back(ub);
        return result;
        
    }
};