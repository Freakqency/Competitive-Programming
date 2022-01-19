#include <bits/stdc++.h>

using namespace std;

int highest(int n) {
    int p = (int) log2(n);
    return (int) pow(2, p);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    cout << highest(n) << '\n';
    return 0;
}
