#include <bits/stdc++.h>

using namespace std;

int solve(string str) {
    unordered_set<char> st;
    int n = str.size();

    for (int i = 0; i < n; i++) {
        if (isalpha(str[i])) st.insert(str[i]);
    }

    return st.size();
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    string str; getline(cin, str);
    cout << solve(str);
    return 0;
}
