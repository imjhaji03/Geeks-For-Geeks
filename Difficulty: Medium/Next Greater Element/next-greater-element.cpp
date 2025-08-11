class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        vector<int> res;
        stack<int> s;
        int n = arr.size();
        
        for(int i = n-1; i >= 0; i--){
            if(s.size() == 0){
                res.push_back(-1);
            }
            else if(s.size() != 0 && s.top() > arr[i]){
                res.push_back(s.top());
            }
            else if(s.size() != 0 && s.top() <= arr[i]){
                while(s.size() !=0 && s.top() <= arr[i]){
                    s.pop();
                }
                if(s.size() == 0){
                    res.push_back(-1);
                }
                else {
                    res.push_back(s.top());
                }
            }
            s.push(arr[i]);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};