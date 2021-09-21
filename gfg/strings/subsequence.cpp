#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    string A = "gksrek", B = "geeksforgeeks";
    int j = 0, n = A.length(), m = B.length(), count = 0;
    if (n > m) cout << "No";
    for (int i = 0; i < m; i++) {
        if (A[j] == B[i]) j++;            
    }
    cout << n << endl; 
    cout << m << endl;
    if (j == n) cout << "Yes" << ' ' << "count: " << count << endl;
    else cout << "No" << " " << "count: " << count << endl;
    return 0;
}
