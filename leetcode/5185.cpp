#include <bits/stdc++.h>

using namespace std;

bool solve(vector<int> arr) {
    for (int i = 0; i <(int) arr.size(); i++) {
        if (arr[i] % 2 != 0) {
            if (arr[i + 1] % 2 != 0) {
                if (arr[i +2] % 2 != 0) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    vector<int> arr{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};    
    cout << solve (arr) << endl;
}
