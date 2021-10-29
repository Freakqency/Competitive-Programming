#include <bits/stdc++.h>

using namespace std;

void solve(int n, int a, int b, string str) {
    int curr_pass = 0, sum = a + b, b_rank = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'a') {
            if (curr_pass < sum) {
                curr_pass++;
                cout << "Yes" << endl;;
            }
            else cout << "No" << endl;
        }
        else if (str[i] == 'b') {
            b_rank++;
            if (curr_pass < sum && b_rank <= b) {
                curr_pass++;
                cout << "Yes" << endl;
            }
            else cout << "No" << endl;
        }
        else cout << "No" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n, a, b; cin >> n >> a >> b;
    string str; cin >> str;
    solve(n, a, b, str);
    return 0;
}
