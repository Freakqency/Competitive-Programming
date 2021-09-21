#include <bits/stdc++.h>

using namespace std;

int sum(int arr[], int start, int end) {
    int res = 0;
    for (int i = start; i < end; i++) res += arr[i];
    return res;
}

int naive_min_pages(int n, int arr[], int m) {
    if (n == 1) return arr[0];
    if (m == 1) return sum(arr, 0, n);
    int res = INT_MAX;
    for (int i = 1; i < n; i++)
        res = min(res, max(naive_min_pages(i, arr, m-1), sum(arr, i, n)));
    return res;
}

bool is_feasible(int arr[], int n, int m, int ans) {
    int req = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] + sum > ans) {
            req++;
            sum = arr[i];
        }
        else sum += arr[i];
    }
    return (req <= m);
}

int eff_min_pages(int arr[], int n, int m) {
    //Binary Search
    int low = *max_element(arr, arr+n), high = sum(arr, 0, n), res = -1;
    while (low <= high) {
        int mid = (low + ((high - low) / 2));    
        if (is_feasible(arr, n, m, mid)) {
            res = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n = 4, arr[] = {10, 20, 30, 40}, m = 2;
    /* cout << naive_min_pages(n, arr, m) << endl; */
    cout << eff_min_pages(arr, n, m) << endl;
    return 0;
}
