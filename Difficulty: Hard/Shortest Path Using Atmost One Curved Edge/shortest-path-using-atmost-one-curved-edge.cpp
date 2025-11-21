class Solution {
  public:
    vector<long long> dijkstra(int V, int src, vector<vector<pair<int,int>>> &adj) {
        const long long INF = LLONG_MAX;
        vector<long long> dist(V, INF);
        dist[src] = 0;

        priority_queue<pair<long long,int>, 
                       vector<pair<long long,int>>, 
                       greater<pair<long long,int>>> pq;
        pq.push({0, src});

        while (!pq.empty()) {
            auto [d, u] = pq.top();
            pq.pop();
            if (d != dist[u]) continue;  

            for (auto &edge : adj[u]) {
                int v = edge.first;
                int w = edge.second;
                if (dist[v] > d + w) {
                    dist[v] = d + w;
                    pq.push({dist[v], v});
                }
            }
        }
        return dist;
    }

    int shortestPath(int V, int a, int b, vector<vector<int>> &edges) {
        vector<vector<pair<int,int>>> adj(V);
        for (auto &e : edges) {
            int x = e[0], y = e[1];
            int w1 = e[2];
            adj[x].push_back({y, w1});
            adj[y].push_back({x, w1});
        }

        const long long INF = LLONG_MAX;

        vector<long long> distA = dijkstra(V, a, adj);
        vector<long long> distB = dijkstra(V, b, adj);

        long long ans = INF;

        if (distA[b] != INF) {
            ans = min(ans, distA[b]);
        }

        for (auto &e : edges) {
            int u = e[0], v = e[1];
            int w2 = e[3];  

            if (distA[u] != INF && distB[v] != INF) {
                ans = min(ans, distA[u] + (long long)w2 + distB[v]);
            }

            if (distA[v] != INF && distB[u] != INF) {
                ans = min(ans, distA[v] + (long long)w2 + distB[u]);
            }
        }

        if (ans == INF) return -1;
        return (int)ans;  
    }
};
