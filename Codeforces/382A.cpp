#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string pan; cin >> pan;
    string weight; cin >> weight;
    int n = pan.size(), m = weight.size();
    int idx = pan.find('|');
    int l = idx, r = n - idx - 1;
    if (r == 0 && m < l) {
        cout << "Impossible" << '\n';
        return 0;
    }
    if (l == 0 && m < r) {
        cout << "Impossible" << '\n';
        return 0;
    }
    if ((r + m) < l) {
        cout << "Impossible" << '\n';
        return 0;
    }
    int tot = l + r + m, j = 0;
    if (tot % 2 == 0) {
        string left, right;
        for (int i = 0; i < l; i++) left += pan[i];
        for (int i = idx + 1; i < n; i++) right += pan[i];
        while (left.size() != tot / 2) left += weight[j++];
        while (right.size() != tot / 2) right += weight[j++];
        string res = left + '|' + right;
        cout << res << '\n';
    } else cout << "Impossible" << '\n';
    return 0;
}
