#include<bits/stdc++.h>

using namespace std;

unordered_map<string, long> memoize;
long mod_val = 1e9 + 7;

long solve(int n, char c) {
    string to_find = to_string(n) + c;
    if (memoize.find(to_find) != memoize.end()) return memoize.at(to_find);
    if (n == 1) return 1;
    long res;
    if (c == 'a') res = solve(n-1, 'e') % mod_val;
    else if (c == 'e') res  = (solve(n-1, 'a') + solve(n-1, 'i')) % mod_val;
    else if (c == 'i') res = (solve(n-1, 'a') + solve(n-1, 'e') + solve(n-1, 'o') + solve(n-1, 'u')) % mod_val;
    else if (c == 'o') res = (solve(n-1, 'i') + solve(n-1, 'u')) % mod_val;
    else if (c == 'u') res = solve(n-1, 'a') % mod_val;
    string to_insert = to_string(n) + c;
    memoize.insert({to_insert, res});
    return res;
}

int countVowelPermutation(int n) {
    long a = solve(n, 'a');
    long e = solve(n, 'e');
    long i = solve(n, 'i');
    long o = solve(n, 'o');
    long u = solve(n, 'u');
    return (a + e + i + o + u) % mod_val;
}

int main() {
    int n = 2;
    cout << countVowelPermutation(n) << endl;
}