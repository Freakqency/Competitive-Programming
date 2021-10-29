#include <bits/stdc++.h>

using namespace std;

void printPowSet(string str) {
    int n = str.length();
    int powSize = pow(2, n);
    for (int i = 0; i < powSize; i++) {
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) cout << str[j];
        }
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    printPowSet("abc");
    return 0;
}
