#include <bits/stdc++.h>

using namespace std;

int solve(int l, int r, int a) {
    return min ({(l + a) * 2, (r + a) * 2, ((l + r + a) / 2) * 2});
}


// My solution
/* int solve(int l, int r, int a) { */
/*     if (l == 0 && a == 0) return 0; */
/*     else if (r == 0 && a == 0) return 0; */
/*     else if (l == r && a % 2 == 0)  return l + r + a; */
/*     else if (l == r && a % 2 != 0) return l + r + (a - 1); */
/*     int min_val = min(l, r); // 44 */
/*     int max_val = max(l, r); // 89 */
/*     int temp_a = a; */
/*     for (int i = 0; i < a; i++) { */
/*         if (min_val < max_val) { */
/*             min_val += 1; */
/*             temp_a--; */
/*         } else break; */
/*     } */
/*     if (temp_a % 2 == 0) return (min_val * 2) + temp_a; */
/*     else if (temp_a == 0) return min_val * 2; */
/*     return (min_val * 2) + (temp_a - 1); */
/* } */

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int l, r, a; cin >> l >> r >> a;
    cout << solve(l, r, a) << '\n';
    return 0;
}
