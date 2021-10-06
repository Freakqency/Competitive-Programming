#include <bits/stdc++.h>

using namespace std;

string solve(string n, char d) {
    string old_n = n;
    while (n.find(d) != string::npos) {
        int num = stoi(n);
        num++;
        n = to_string(num);
    }
    return to_string(abs(stoi(old_n) - stoi(n)));
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        string n; cin >> n;
        char d; cin >> d;
        cout << solve(n, d) << '\n';
    }
    return 0;
}
