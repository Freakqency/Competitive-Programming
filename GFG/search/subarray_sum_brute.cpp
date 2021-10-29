#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 10;
    int sum = 15;
    int arr[n] = {1,2,3,4,5,6,7,8,9,10};
    bool flag = false;
    for(int i = 0; i < n; i++) {
        int curr_sum = 0;
        curr_sum += arr[i];
        for(int j = i + 1; j < n; j++) {
            curr_sum += arr[j];
            if (curr_sum == sum) {
                cout << i+1 << " " << j+1 << endl;
                flag = 1;
                break;
            }
        }
        if(flag)
            break;
    }

    if (!flag)
        cout << -1 << endl;
}
