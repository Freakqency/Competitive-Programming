#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string solve(string n, char d) {
   int len = n.size();
   ll idx = n.find(d);
   if (idx == -1) return "0";
   if (len == 1) return "1";
   if (d == '0') {
       string ncpy = n;
       for (int i = 0; i < (int) ncpy.size(); i++) 
           if (ncpy[i] == '0') ncpy[i] = '1';
       return to_string(stol(ncpy) - stol(n));
   }
   string round(((d == '9') ? len - idx + 1 : len - idx ) , '0');
   round[0] = '1';
   ll new_val = (ll) stol(n) / stol(round);
   if ((ll) stol(n) % stol(round) > 0) new_val++;
   new_val *= stol(round);
   return to_string(new_val - stol(n));
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t; cin >> t;
    while (t--) {
        string n; cin >> n;
        char d; cin >> d;
        cout << solve(n, d) << '\n';
    }
    return 0;
}
