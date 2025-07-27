class Solution {
  public:
  void DFSG(unordered_map<int, vector<int>> &mpp, int u, vector<bool> &visited, vector<int> &result){
    if(visited[u]== true) return;
    
    visited[u] = true;
    result.push_back(u);
    
    for(auto &v : mpp[u]){
        if(!visited[v]){
            DFSG(mpp, v, visited, result);
        }
    }
      
  }
  
  public:
  
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n = adj.size();
        
        unordered_map<int, vector<int>> mpp;
        for(int u = 0; u < n; u++){
            for(auto it : adj[u]){
                mpp[u].push_back(it);
            }
        }
        
        vector<int> result;
        vector<bool> visited(n, false);
        DFSG(mpp, 0, visited, result);
        
        return result;
    }
};