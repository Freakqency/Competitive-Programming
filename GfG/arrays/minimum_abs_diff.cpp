#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 8;
    int arr[n] = {10, -3, -4, 7, 6, 5, -4, -1};

    vector<int> diff;
    for (int i = 1; i < n; i++){
        int difference = abs(arr[i] - arr[i - 1]);
        diff.push_back(difference);
    }

    int last_val = abs(arr[n - 1] - arr[0]);
    diff.push_back(last_val);
    
    int min_val = INT_MAX;
    for (int i = 0; i < n; i++)
        min_val = min(min_val, diff[i]);

    cout << min_val << endl;
}
