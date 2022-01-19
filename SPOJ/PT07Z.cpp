#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector<vector<int>> adj) {
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    vector<vector<int>> adj(n);
    for (int i = 0; i < n; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout << solve(n, adj) << '\n';
    return 0;
}
