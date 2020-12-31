#include <bits/stdc++.h>

using namespace std;

int solve(int arr[], int n) {
    if (n < 2) return 0;
    int count = 0;
    for (int i = 0; i < n; i++) 
        for (int j = i+1; j < n; j++) 
            if ((arr[i]&arr[j]) == arr[i])  
                count++;            
    return count;
}

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        int n; scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        printf("%d\n", solve(arr, n));
    }
    return 0;
}
