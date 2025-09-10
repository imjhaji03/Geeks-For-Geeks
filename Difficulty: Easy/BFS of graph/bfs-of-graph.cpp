class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int V = (int)adj.size();
        vector<int> bfs;
        vector<int> visvec(V, 0);
        
        int *vis = visvec.data();
        
        
        for(int i = 0; i < V; i++){
            if(vis[i]) continue;
            vis[i] = 1;
            queue<int> q;
            q.push(i);
            while(!q.empty()){
                int node = q.front();
                q.pop();
                bfs.push_back(node);
                for(auto it : adj[node]){
                    if(!vis[it]){
                        vis[it] = 1;
                        q.push(it);
                    }
                }
            }
        }
        return bfs;
        
    }
};