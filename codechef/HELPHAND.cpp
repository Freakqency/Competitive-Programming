#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int lcm(int a, int b) {
    return (a*b/gcd(a, b));
}

int solve(int n) {
    int arr[n], val = n, count = 0;
    for (int i = 0; i < n; i++){
        arr[i] = val;
        val--;
    }
    for (int i = 0; i < n-1; i++) {
        int lcm_val = lcm(arr[i], arr[i+1]);
        arr[i] = lcm_val;
        arr[i+1] = lcm_val;
        count++;
    }
    int max_val = arr[n-1];
    for (int i = 0; i < n; i++) {
        if (arr[i] != max_val) {
            count++;
        }
    }
    return count;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", solve(n));        
    }
    return 0;

}
