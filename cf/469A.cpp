#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);    
	int n; cin >> n;
	string res = "I become the guy.";
	set<int> st;
	int p; cin >> p;
	for (int i = 0; i < p; i++) {
		int tmp; cin >> tmp;
		st.insert(tmp);
	}
	int q; cin >> q;
	for (int i = 0; i < q; i++) {
		int tmp; cin >> tmp;
		st.insert(tmp);
	}
	for (int i = 1; i <= n; i++) {
		if (st.find(i) == st.end()) {
			res = "Oh, my keyboard!";
			break;
		}
	
	cout << res << '\n';
	return 0;
}