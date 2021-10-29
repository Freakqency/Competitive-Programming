#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 8;
    int arr[] = {2, 4, 8, 9, 11, 12, 20, 30};
    int l = 0, r = n - 1;
    int sum = 23;
    while (l != r) {
        int curr_sum = arr[l] + arr[r];
        if (curr_sum == sum) {
            cout << l << " " << r << endl;
            return 0;
        }
        else if (curr_sum > sum)
            r--;
        else
            l++;
    }
    return 0;
}
