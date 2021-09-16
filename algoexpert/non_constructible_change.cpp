#include <bits/stdc++.h>

using namespace std;

int nonConstructibleChange(vector<int> coins) {
    int n = coins.size(), x = 0, greatest = coins[n-1];
    if (n == 0) return 1;
    for (int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            coins.push_back(coins[i] + coins[j]);
        }
    }
    sort(coins.begin(), coins.end());
    for (auto i : coins) cout << i << ' ';
    /* for (int i = 1; i <= greatest; i++) { */
    /*     if (coins[x] != i) return i; */
    /*     x++; */
    /* } */
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    vector<int> coins{5, 7, 1, 1, 2, 3, 22};
    cout << nonConstructibleChange(coins) << endl;
    return 0;
}
