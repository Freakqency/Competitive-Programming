#include <bits/stdc++.h>

using namespace std;

void solve(int n, vector<int> arr) {
    priority_queue<int> pq;
    int missing = n;
    for (int i = 0; i < n; i++) {
        if (arr[i] == missing) {
            cout << arr[i] << ' ';
            missing--;
            while (!pq.empty() && pq.top() == missing) {
                cout << pq.top() << ' ';
                pq.pop();
                missing--;
            }
            cout << '\n';
        }
        else {
            cout << '\n';
            pq.push(arr[i]);
        }
    }
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);    
	int n; cin >> n;
	vector<int> arr(n, 0);
    for (int i = 0; i < n; i++) cin >> arr[i];
    solve(n, arr);
	return 0;
}
