#include <bits/stdc++.h>

using namespace std;

bool dfs(int node, int parent, vector<bool>& visited,
        vector<vector<int>>& adj) {
    visited[node] = true;
    for (int u : adj[node]) {
        if (visited[u] == false)
            if (dfs(u, node, visited, adj)) return true;
        else if (u != parent) return true;
    }
    return false;
}

string solve(vector<vector<int>> adj, int n) {
    vector<bool> visited(n + 1);
    if (dfs(1, -1, visited, adj)) return "NO";
    for (int i = 1; i <= n; i++)
        if (visited[i] == false) return "NO";
    return "YES";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, m; cin >> n >> m;
    vector<vector<int>> adj;
    adj.resize(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout << solve(adj, n) << '\n';
    return 0;
}
