#include <bits/stdc++.h>

using namespace std;

int solve(int arr[], int n, int k) {
    for (int i = 0; i < n; i++) 
        if (arr[i] > k)
            return -1;
    int trips = 1;
    int sumVal = 0;
    for (int i = 0; i < n; i++) {
        sumVal += arr[i];
        if (sumVal > k) {
            trips++;
            sumVal = 0;
            i--;
        }
    }
    return trips;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        printf("%d\n", solve(arr, n, k));
    }
    return 0;
}
