#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll solve(ll n, ll k) {
	ll first_half = 0, second_half = 0, res = 0, cnt = 0;
	if (n % 2 == 0) first_half = second_half = n / 2;
	else {
		first_half = n / 2 + 1;
		second_half = n - first_half;
	}
	if (k >= 1 && k <= first_half) {
		for (int i = 1; i <= first_half; i += 2) {
			cnt++;
			if (cnt == k) {
				res = i;
				break;
			}
		}
	}
	else {
		for (int i = 2; i <= first_half +  second_half; i += 2) {
			cnt++;
			if (cnt == k) {
				res = i;
				break;
			}
		}
	}
	return res;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);    
	ll n, k; cin >> n >> k;
	cout << solve(n, k) << '\n';
	return 0;
}