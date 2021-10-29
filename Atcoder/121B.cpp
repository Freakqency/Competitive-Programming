#include <bits/stdc++.h>

using namespace std;

int solve(int n, int m, int c, vector<vector<int>>A, vector<int> B) {
    int res = 0;
    for (int i = 0; i < n; i++) {
        int curr_sum = 0;
        for (int j = 0; j < m; j++) curr_sum += A[i][j] * B[j];
        curr_sum += c;
        if (curr_sum > 0) res++;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n, m, c; cin >> n >> m >> c;
    vector<vector<int>>A(n, vector<int>(m));
    vector<int> B(m,0);
    for (int i = 0; i < m; i++) cin >> B[i];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) cin >> A[i][j];
    cout << solve(n, m, c, A, B);
    return 0;
}
