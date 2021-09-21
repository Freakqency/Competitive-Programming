#include <bits/stdc++.h>

using namespace std;

float solve(int l) {
    float result = (1/2.0 * (pow(l, 2)) * 1/M_PI);
    return result;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int l = -1;
    while (l != 0) {
        cin >> l;
        if (l == 0) break;
        printf("%.2f\n", solve(l));
    }
    return 0;
}
