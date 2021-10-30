#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define ll long long

vector<int> get_closest(ll n) {
    vector<int> res(2);
    for (int j = 1; j <= 7; j++) {
        float ival = ((n + 7) - j) / 7;
        cout << ival << '\n';
    }
    return res;
}

string solve(ll n, ll m, vector<vector<ll>> arr) {
    vector<int> a = get_closest(arr[0][0]);
    /* ll aj = a[1]; */
    /* ll ai = a[0]; */
    /* cout << aj << '\n'; */
    /* cout << ai << '\n'; */
    /* for (ll i = 1; i < n; i++) { */
    /*     for (ll j = 1; j < m; j++) { */
    /*         ll aval = ((((ai + i) - 1) * 7) + (aj + j)); */
    /*         if (aval != arr[i][j]) return "No"; */
    /*     } */
    /* } */
    return "Yes";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n, m; cin >> n >> m;
    vector<vector<ll>> arr(n, vector<ll>(m));
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) 
            cin >> arr[i][j];
    }
    cout << solve(n, m, arr) << '\n';
    return 0;
}
