#include <bits/stdc++.h>

using namespace std;

string solve(vector<int> god, int ng, vector<int> mgod, int nm) {
    auto max_god = *max_element(god.begin(), god.end());
    auto max_mgod = *max_element(mgod.begin(), mgod.end());
    return (max_mgod > max_god) ? "MechaGodzilla" : "Godzilla";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int t; cin >> t;
    while (t--) {
        int ng, nm; cin >> ng >> nm;
        vector<int> god(ng, 0), mgod(nm, 0);
        for (int i = 0; i < ng; i++) cin >> god[i];
        for (int i = 0; i < nm; i++) cin >> mgod[i];
        cout << solve(god, ng, mgod, nm) << '\n';
    }
    return 0;
}
