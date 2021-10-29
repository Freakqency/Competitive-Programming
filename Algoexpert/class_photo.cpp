#include <bits/stdc++.h>

using namespace std;

bool classPhotos(vector<int> red, vector<int> blue) {
	sort (red.begin(), red.end());
	sort (blue.begin(), blue.end());
	int n = blue.size(), flag;
	if (red[0] > blue[0]) flag = 1;
	else if (blue[0] > red[0]) flag = 0;
	else return false;
	for (auto i : red) cout << i << ' ';
	cout << endl;
	for (auto i : blue) cout << i << ' ';
	cout << flag << endl;
	for (int i = 1; i < n; i++) {
		if (flag) {
			if (red[i] <= blue[i]) return false;
		} else {
			if (blue[i] <= red[i]) return false;
		}
	}
	return true;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    vector<int> red{1, 1, 1, 1, 1, 1, 1, 1}, blue{5, 6, 7, 2, 3, 1, 2, 3};
    cout << classPhotos(red, blue) << endl;
    return 0;
}
