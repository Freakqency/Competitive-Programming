#include <bits/stdc++.h>

using namespace std;

int solve(int d1, int v1, int d2, int v2, int p) {
    int days = min(d1, d2) - 1;
    if (d1 == d2) {
        int tot = v1 + v2;
        days += (p / tot) + ((p % tot) != 0);
    } else if (d2 < d1) {
        int tot = 0;
        while (d2 != d1 && tot < p) {
            tot += v2;
            d2++;
            days++;
        }
        if (tot < p) {
            while (tot < p) {
                tot += v1 + v2;
                days++;
            }
        }
    } else {
        int tot = 0;
        while (d1 != d2 && tot < p) {
            tot += v1;
            d1++;
            days++;            
        }
        if (tot < p) {
            while (tot < p) {
                tot += v1 + v2;
                days++;
            }
        }
    }
    return days;    
}
// upsolved with better solution
int upsolve(int d1, int v1, int d2, int v2, int p) {
    int days = min(d1, d2) - 1;
    if (d1 < d2) {
        if (p / v1 < (d2 - d1))
            days += p / v1 + (p % v1 > 0);
        else if ((p - (d2 - d1)*v1) % (v1 + v2) > 0)
            days += d2 - d1 + (p - (d2 - d1)*v1) / (v1 + v2) + 1;
        else 
            days += d2 - d1 + (p - (d2 - d1)*v1) / (v1 + v2);

    } else {
        if (p / v2 < (d1 - d2))
            days += p / v2 + (p % v2 > 0);
        else if ((p - (d1 - d2)*v2) % (v1 + v2) > 0)
            days += d1 - d2 + (p - (d1 - d2)*v2) / (v1 + v2) + 1;
        else 
            days += d1 - d2 + (p - (d1 - d2)*v2) / (v1 + v2);

    }
    return days;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int d1, v1, d2, v2, p; cin >> d1 >> v1 >> d2 >> v2 >> p;
    cout << upsolve(d1, v1, d2, v2, p) << '\n';    
    return 0;
}
