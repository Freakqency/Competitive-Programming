#include <bits/stdc++.h>

using namespace std;

int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int fib_iterative(int n) {
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    cout << fib_iterative(13) << endl;
    cout << fib(13) << endl;
    return 0;
}
