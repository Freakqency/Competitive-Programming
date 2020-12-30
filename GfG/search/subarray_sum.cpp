#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 10, s = 15;
    int arr[n] = {1,2,3,4,5,6,7,8,9,10};
    bool flag = false;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == s) {
                cout << i+1 << " " << j+1 << endl;
                flag = 1;
                break;
            }
        }
        if (flag)
            break;
    }
}
