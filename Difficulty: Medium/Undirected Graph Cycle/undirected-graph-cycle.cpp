class Solution {
  public:
  bool iscyclicdfs(vector<vector<int>>& adj, int u, vector<bool> &visited, int parent){
      if(visited[u] == true) return true;
      visited[u] = true;
      
      for(auto &v : adj[u]){
          if(v == parent) continue;
          if(visited[v]) return true;
          
          if (iscyclicdfs(adj, v, visited, u)){
              return true;
          }
          
      }
      return false;
  }
  public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        
        // Code here
        vector<vector<int>> adj(V);
        for (const auto& edge : edges) {
        
          if (edge.size() == 2) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u); 
          }
      }
        vector<bool> visited(V,false);
        for(int i = 0; i < V; i++){
            if(!visited[i] && iscyclicdfs(adj,i, visited, -1)){
                return true;
            }
        }
        return false;
        
    }
};