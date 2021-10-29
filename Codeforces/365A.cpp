#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, cnt = 0; cin >> n >> k;
    for (int i = 0; i < n; i++) {
        string str; cin >> str;
        bool flag = true;
        for (int j = 0; j <= k; j++) 
            if (str.find(j + '0') == string::npos) flag = false;
        if (flag) cnt++;
    }
    cout << cnt << '\n';
    return 0;
}
