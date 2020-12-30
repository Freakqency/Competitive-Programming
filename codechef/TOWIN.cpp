#include <iostream>
#include <algorithm>

using namespace std;

string solve(int arr[], int n) {
    long p1 = 0, p2 = 0;
    sort (arr, arr + n, greater<int>());
    p1 += arr[0];
    if (n == 2) {
        p2 += arr[1];
    }
    else {
        p2 += arr[1] + arr[2];
        for (int i = 3; i < n; i++) {
            if (i % 2 == 0) {
                p2 += arr[i];
            }
            else {
                p1 += arr[i];
            }
        }
    }
    if (p1 > p2) {
        return "first";
    }
    else if (p2 > p1) {
        return "second";
    }
    return "draw";
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        printf("%s\n", solve(arr, n).c_str());
    }
    return 0;
}
