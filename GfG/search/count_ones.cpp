#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 7;
    int arr[n] = {0, 0, 1, 1, 1, 1, 1};
    int high = n-1, low = 0;
    int count = 0;
    while (low <= high) {
        int mid = (high + low) / 2;
        if (arr[mid] == 0)
            low = mid + 1;
        else {
            if (mid == 0 || arr[mid] != arr[mid-1]) {
                count = n - mid;
                return count;
            }
            else 
                high = mid + 1;
        }
    }
    cout << count << endl;
}
