#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = {1, 8, 30, -5, 20, 7};
    int k = 3;
    int res = 0;
    for (int i = 0; i < 6; i++) {
        int curr = 0;
        for (int j = 0; j < k; j++) {
            curr += arr[i+j];
        }
        res = max(res, curr);
    }
    cout << res << endl;
}
