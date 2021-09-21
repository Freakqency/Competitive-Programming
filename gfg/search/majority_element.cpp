#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 5;
    int arr[n] = {3,1,3,3,2};
    int count = 1, res = 0;
// Moores voting algo
    for (int i = 1; i < n; i++) {
        if (arr[res] == arr[i])
            count++;
        else
            count--;

        if (count == 0) {
            res = i;
            count = 1;
        }
    }
// needed to check if the selected candidate is majority element
    count = 0;
    for (int i = 0; i < n; i++)
        if (arr[res] == arr[i])
            count++;
    if (count > n/2)
        cout << arr[res];
    else
        cout << -1 << endl;
}

