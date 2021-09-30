#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);    
	int n, k = 1; cin >> n;
	vector<int> arr(n, 0), res(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[j] == k) cout << j + 1;
		}
		k++;
		cout << ' ';
	}
	cout << '\n';
	return 0;
}