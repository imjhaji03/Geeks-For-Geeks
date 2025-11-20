class Solution {
  public:
    int search(vector<int>& arr, int x) {
        // code here
        auto it = find(arr.begin(),arr.end(),x);
        if((*it == x)){
            return it - arr.begin();
        }
        else{
            return -1;
        }
        
    }
};