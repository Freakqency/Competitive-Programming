#include <bits/stdc++.h>

using namespace std;


void one_to_n(int n) {
    if (n == 0) return;
    one_to_n(n - 1);
    cout << n << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    one_to_n(64);
    return 0;
}
