#include <bits/stdc++.h>

using namespace std;

int solve(int a, int k) {
    for (int i = 0; i < a; i++) {
        int val = abs(i - (a-i));
        if (val == k)
            return 0;
    }
    return abs(k-a);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, k;
        scanf("%d %d", &a, &k);
        printf("%d\n",solve(a, k));
    }
    return 0;
}
