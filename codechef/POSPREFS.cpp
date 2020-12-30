#include <bits/stdc++.h>

using namespace std;

// December'20 Long Challenge
vector<int> solve(int n, int k) {
    vector<int> elements;
    for (int i = 1; i <= n; i++)
        elements.push_back(i);
    int num_neg = n - k;
    if (num_neg == 0) return elements;
    for (int i = 0; i < n; i++)
        if (i % 2 == 0 && num_neg > 0) {
            elements[i] *= -1;
            num_neg--;
        }
    int i = n - 1;
    while (num_neg > 0) {
        if (elements[i] > 0) {
            elements[i] *= -1;
            num_neg--;
        }            
        i--;
    }
    return elements;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> res = solve(n, k);
        for (int i : res) cout << i << ' ';
        cout << '\n';
    }
    return 0;
}
