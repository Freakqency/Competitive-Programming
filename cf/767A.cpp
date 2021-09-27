#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);    
	int n; cin >> n;
	vector<int> arr(n, 0);
	for (int i = 0; i < n; i++) cin >> arr[i];
	int target = n;
	vector<int> missed;
	for (int i = 0; i < n; i++) {
		if (arr[i] == target) {
			cout << arr[i]; 
			target--;
			for (int j = 0; j < (int) missed.size(); j++) cout << missed[j];
		}
		else {
			cout << '\n';
			missed.push_back(arr[i]);
		}
	}
	return 0;
}