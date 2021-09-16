#include <bits/stdc++.h>

using namespace std;

void to_n(int n) {
    if (n == 0) return;
    cout << n << endl;
    to_n(n - 1);
}


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    to_n(5);
    return 0;
}
