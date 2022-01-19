#include<bits/stdc++.h>

using namespace std;

bool dfs(int node, int parent, vector<vector<int>>& adj,
        vector<bool>& visited) {
    visited[node] = true;
    for (int u : adj[node]) {
        if (visited[u] == false) {
            if (dfs(u, node, adj, visited)) return true;
        }
        else if (u != parent) return true;
    }
    return false;
}

bool checkCycle(int n, vector<vector<int>>& adj) {
    vector<bool> visited(n + 1);
    for (int i = 1; i <= n; i++) {
        if (visited[i] == false) {
            if (dfs(i, -1, adj, visited)) return true;
        }
    }
    return false;
}

int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> adj;
    adj.resize(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool res = checkCycle(n, adj);
    cout << res << '\n';
    return 0;
}
