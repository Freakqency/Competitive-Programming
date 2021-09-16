#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n = 42, s = 468;
    vector<int> arr={135, 101, 171, 125, 79, 159, 163, 65, 106, 146, 82, 28, 162, 92, 196, 143, 28, 37, 192, 5, 103, 154, 93, 183, 22, 117, 119, 96, 48, 127, 172, 139, 70, 113, 68, 100, 36, 95, 104, 12, 123, 134};
    for (int i = 0; i < n; i++) {
        int curr_sum = 0;
        for (int j = i; j < n; j++) {
            curr_sum += arr[j];
            if (curr_sum == s) {
                cout << i + 1 << ' ' << j << endl;
                return 0;                
            }
        }
    }
    cout << "sum not found" << endl;
    return 0;
}
