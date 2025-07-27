class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        // Code here
        vector<vector<int>> result(V);
        unordered_map<int, vector<int>> adj;
        for(auto &it : edges){
            int u = it.first;
            int v = it.second;
            
            result[u].push_back(v);
            result[v].push_back(u);
            
        }
        return result;
    }
};