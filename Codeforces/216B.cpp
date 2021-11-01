#include <bits/stdc++.h>

using namespace std;

int solve(vector<vector<int>> graph, int n, int m) {
    set<int> A, B, C;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j != graph[i][0] && j != graph[i][1] && A.find(j) == A.end()) {
                A.insert(j);
                break;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, m; cin >> n >> m;
    vector<vector<int>> graph(m);
    for (int i = 0, u, v; i < m; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    cout << solve(graph, n, m) << '\n';
    return 0;
}
