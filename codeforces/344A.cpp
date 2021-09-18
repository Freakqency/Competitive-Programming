#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector<string> arr) {
    int res = 1;
    for (int i = 1; i < n; i++) {
        string str1 = arr[i];
        string str2 = arr[i - 1];
        if (str1[1] == str2[0]) res++;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n; cin >> n;
    vector<string> arr;
    for (int i = 0; i < n; i++) {
        string str; cin >> str;
        arr.push_back(str);
    }
    cout << solve(n, arr) << '\n';
    return 0;
}
