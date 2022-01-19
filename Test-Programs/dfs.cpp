#include <bits/stdc++.h>

using namespace std;

bool dfs(int node, int parent, vector<bool>& visited, 
        vector<vector<int>>& adj) {
    visited[node] = true;
    for (int u : adj[node]) {
        if (visited[u] == false) {
            if (dfs(u, node, visited, adj)) return true;
        }
        else if (u != parent) return true;
    }
    return false;
}

bool isCycle(int n, vector<vector<int>> adj) {
    vector<bool> visited(n + 1);
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            if (dfs(i, -1, visited, adj)) return true;
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
    bool res = isCycle(n, adj);
    if (res) cout << "There is a cycle" << '\n';
    else cout << "No cycle" << '\n';
    return 0;
}
