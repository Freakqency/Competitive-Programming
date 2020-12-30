#include <bits/stdc++.h>

using namespace std;

int solve(int arr[], int n) {
    int res = 0;
    sort (arr, arr+n);
    for (int i = 0; i < n; i++) 
        for (int j = i+1; j < n; j++)
            for (int k = j+1; k < n; k++) 
                if (arr[i] + arr[j] > arr[k] && arr[i] != arr[j] && arr[j] != arr[k])
                    res++;
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
    printf("%d\n", solve(arr, n));    
    return 0;
}
