#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    vector<int> map(128, 0);
    string s = "adobecodebanc", t = "abc";
    int start = 0, end = 0, head = 0, d = INT_MAX, counter = t.size();
    for (auto c : t) map[c]++;
    while (end < s.size()) {
        if (map[s[end++]]-- > 0) counter--;
        while (counter == 0) {
            if (end - start < d) d = end - (head = start);
            if (map[s[start++]]++ == 0) counter++;
        }

    }
    cout << s.substr(head, d) << endl;
}
