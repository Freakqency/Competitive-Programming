#include <bits/stdc++.h>

using namespace std;

bool isValidSubsequence(vector<int> arr, vector<int> sequence) {
    int j = 0, n = arr.size(), m = sequence.size();
    for (int i = 0; i < n; i++) {
        if (arr[i] == sequence[j]) j++;
    }
    return j == m;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    vector<int> arr{1, 2, 3, 4};
    vector<int> sub{1, 3, 4};
    cout << isValidSubsequence(arr, sub) << endl;
    return 0;
}
