#include <bits/stdc++.h>

using namespace std;

bool check_in_array(int arr[], int s, int e, int x) {
    if (s >= e) return false;
    if (arr[e] == x) return true;
    if (arr[s] == x) return true;
    return check_in_array(arr, s + 1, e - 1, x);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, x = 11;
    cout << check_in_array(arr, 0, 9, x) << endl;
    return 0;
}
