#include <bits/stdc++.h>

using namespace std;

//Naive sol
int main() {
    int n = 2;
    int arr[n] = {3,4};
    if (arr[0] > arr[1])
        return 0;
    for (int i = 1; i < n; i++) {
        if (i == n && arr[i] > arr[i - 1])
            return i;

        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            return i;
    }
}
