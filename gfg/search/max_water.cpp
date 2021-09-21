#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 6;
    int arr[n] = {2, 1};
    int maximum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int current = min(arr[i], arr[j]) * (j - i - 1);
            maximum = max(current, maximum);
        }
    }

    cout << maximum << endl;
}
