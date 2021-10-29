#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll solve(vector<pair<int, int>> arr) {
	sort(arr.rbegin(), arr.rend());
	int tot = 240, pts = 0;
	pts += arr[0].first * 20;
	tot -= arr[0].second * 20;
	while (tot > 0) {
		for (int i = 0; i < 20; i++) {
			if (tot <= 0) break;
			pts += arr[1].first;
			tot -= arr[1].second;
		}
		for (int i = 0; i < 20; i++) {
			if (tot <= 0) break;
			pts += arr[2].first;
			tot -= arr[2].second;
		}
	}
	return pts + tot;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);    
	ll t; cin >> t;
	while (t--) {
		ll a, b, c; cin >> a >> b >> c;
		ll x, y, z; cin >> x >> y >> z;
		vector<pair<int, int>> arr = {{x, a}, {y, b}, {z, c}};
		cout << solve(arr) << '\n';
	}
	return 0;
}