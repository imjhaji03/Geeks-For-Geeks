class Solution {
  public:
    void BFSG(unordered_map<int, vector<int>>&adj, int u, vector<bool> &visited, vector<int> & result){
        queue<int> q;
        q.push(u);
        visited[u]=true;
        result.push_back(u);
        
        while(!q.empty()){
            int u = q.front();
            q.pop();
            for(auto &v : adj[u]){
                if(!visited[v]){
                    q.push(v);
                    visited[v]=true;
                    result.push_back(v);
                }
            }
        }
    }
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &mpp) {
        // Code here
        int  V = mpp.size();
        vector<int> result;
        unordered_map<int, vector<int>> adj;
        for(int u = 0; u < V; u++){
            for(auto &it : mpp[u]){
                adj[u].push_back(it);
            }
        }
        
        vector<bool> visited(V,false);
        BFSG(adj, 0, visited  ,result);
        return result;
        
        
    }
};