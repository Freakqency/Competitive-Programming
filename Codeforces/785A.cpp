#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int tot = 0;
    while (n--) {
        string str; cin >> str;
        if (str == "Tetrahedron") tot += 4;
        else if (str == "Cube") tot += 6;
        else if (str == "Octahedron") tot += 8;
        else if (str == "Dodecahedron") tot += 12;
        else if (str == "Icosahedron") tot += 20;
    }
    cout << tot << '\n';
    return 0;
}
