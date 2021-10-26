#include <bits/stdc++.h>

using namespace std;

string solve(int n, int k) {
    string char_set = "", res = "";
    int rem = n % k, quo = n / k;
    for (int i = 97; i < 97 + k; i++) char_set += char(i);
    for (int i = 0; i < quo; i++) res += char_set;
    for (int i = 0; i < rem; i++) res += char_set[i];
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n, k; cin >> n >> k;
    cout << solve(n, k) << '\n';
    return 0;
}
