#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 3;
    int arr[n];
    int res = 0;
    for (int i = 0; i < n; i++) {
        arr[i] = ((i*2) + 1);
    }
    int mid;
    if (n % 2 != 0) {
        mid = arr[n/2];
    }
    else {
        mid = (arr[n/2] + arr[n/2 - 1]) / 2;
    }
    int i = 0;
    while (arr[i] < mid) {
        res += mid - arr[i];
        i++;
    }
    cout << res << endl;
}
