#include <bits/stdc++.h>

using namespace std;

int solve(double n) {
    int cards = 1;
    double i = 2.00;
    double current_sum = 1.00 / i;
    if (current_sum >= n) return cards;
    while (true) {
        i++;
        current_sum += 1.00 / i;        
        cards++;
        if (current_sum >= n) break;
    }
    return cards;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    double n;
    while (n != 0.00) {
        cin >> n;
        if (n == 0.00) break;
        cout << solve(n) << ' ' << "card(s)" << '\n';
    }
    return 0;
}
