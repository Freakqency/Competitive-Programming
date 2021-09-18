#include<iostream>

using namespace std;

string solve(string s, int n) {
    int a = 0, d = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') a++;
        else if (s[i] == 'D') d++;
    }
    if (a > d) return "Anton";
    else if (d > a) return "Danik";
    return "Friendship";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n; cin >> n;
    string s; cin >> s;
    cout << solve(s, n) << '\n';
    return 0;
}
