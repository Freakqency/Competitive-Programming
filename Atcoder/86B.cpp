#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string a, b; cin >> a >> b;
    string num = a + b;
    int n = stoi(num);
    if (ceil((double) sqrt(n)) == floor((double) sqrt(n))) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
