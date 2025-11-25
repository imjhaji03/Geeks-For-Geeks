class Solution {
  public:
    void binSort(vector<int> &arr) {
        // code here
        int i =0;
        int j =arr.size()-1;
        
        while(i <= j){
            if(arr[i] == 1 && arr[j] == 0){
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
            else if(arr[i] == 1 && arr[j] != 0){
                j--;
            }
            else{
                i++;
            }
        }
    }
};
