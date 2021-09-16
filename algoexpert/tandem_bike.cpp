#include <bits/stdc++.h>

using namespace std;

int tandemBicycle(vector<int> red, vector<int> blue,
                  bool fastest) {
	if (fastest) {
		sort (red.begin(), red.end(), greater<int>());
		sort (blue.begin(), blue.end());
	} else {
		sort (red.begin(), red.end());
		sort (blue.begin(), blue.end());
	}
	for (auto i : red) cout << i << ' ';
	cout << endl;
	for (auto i : blue) cout << i << ' ';
	int tot = 0, n = red.size();
	for (int i = 0; i < n; i++) tot += max(red[i], blue[i]);
	return tot;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    vector<int> red{5, 5, 3, 9, 2}, blue{3, 6, 7, 2, 1};
    bool fastest = 1;
    cout << tandemBicycle(red, blue, fastest) << endl;
    return 0;
}
