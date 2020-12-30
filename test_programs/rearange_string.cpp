#include <bits/stdc++.h>

using namespace std;

int main() {
    string str = "supahotboy";
    int n = str.length();
    string pat = "bohoty";
    string todel = "";
    string res = "";
    cout << str << endl;
    for (int i = 0; i < (int) pat.length(); i++) {
        int found = str.find(pat[i]);
        str[found] = '\0';
    }
    for (int i = 0; i < n; i++) {
        if (str[i] <= pat[0]) {
            res += str[i];
            str[i] = '\0';
        }
    }
    res += pat;
    sort(str.begin(), str.end());
    res += str;
    cout << res << endl;
}
