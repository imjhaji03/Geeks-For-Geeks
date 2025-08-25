class Solution {
  public:
  
    int knapsackrec(int W, vector<int> &val, vector<int> &wt, int n, vector<vector<int>> &t){
        if(n == 0 || W == 0){
            return 0;
        }
        
        if(t[n][W] != -1){
            return t[n][W];
        }
        else if(wt[n-1] <= W){
            return t[n][W] = max(val[n-1] + knapsackrec(W-wt[n-1], val, wt, n-1, t), knapsackrec(W, val, wt, n-1, t));
        }
        else if(wt[n-1] > W){
            return t[n][W] = knapsackrec(W, val, wt, n-1, t);
        }
    }
  public:
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int n = val.size();
        
        vector<vector<int>> t(n+1, vector<int>(W+1, -1));
        
        return knapsackrec(W, val, wt, n,t);
        
    }
};