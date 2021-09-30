incl#ude <bits/stdc++.h>

using namespace std;

int solve(int n, vector<pair<int, int>> arr) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i].first == arr[j].second) cnt++;
        }
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n; cin >> n;
    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++) {
        int n1, n2; cin >> n1 >> n2;
        pair<int, int> elements = make_pair(n1, n2);
        arr.push_back(elements);
    }
    cout << solve(n, arr) << '\n';
    return 0;
}
