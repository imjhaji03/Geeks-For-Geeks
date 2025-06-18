class Solution {
  public:
    int mostFreqEle(vector<int>& arr) {
        // code here
        
        int n = arr.size();
        int maxfreq = 0;
        int maxele;
        unordered_map<int, int> mpp;
        
        for(int i = 0; i < n; i++){
            mpp[arr[i]]++;
        }
        
        for(auto it : mpp){
            int ele = it.first;
            int freq = it.second;
            
            if(freq > maxfreq){
                maxfreq = freq;
                maxele = ele;
            }
            else if(freq == maxfreq){
                maxele = max(maxele, ele);
            }
        }
        return maxele;
    }
};