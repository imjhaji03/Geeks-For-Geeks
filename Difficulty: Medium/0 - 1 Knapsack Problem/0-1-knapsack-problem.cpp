class Solution {
  public:
  
    int knapsackRec(int W, vector<int> &val, vector<int> &wt, int n, vector<vector<int>> &t){
        if(W == 0 || n == 0){
            return 0;
        }
        if(t[n][W] != -1){
            return t[n][W];
        }
        
        if(wt[n-1] <= W){
            return t[n][W] = max(val[n-1] + knapsackRec(W - wt[n-1], val, wt, n-1, t), knapsackRec(W, val, wt, n-1, t));
        }
        else if(wt[n-1] > W){
            return t[n][W] = knapsackRec(W, val, wt, n-1, t);
        }
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        
        // code here
        
        int n = val.size();
        
        vector<vector<int>> t(n + 1, vector<int>(W + 1, -1));
        
        
        return knapsackRec(W, val, wt, n, t);
        
    }
};