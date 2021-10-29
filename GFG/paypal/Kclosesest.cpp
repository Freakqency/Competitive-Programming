#include<bits/stdc++.h>

using namespace std;

vector<int> findClosestElements(vector<int>& A, int k, int x) {
    int left = 0, right = A.size() - k;
    while (left < right) {
        int mid = (left + right) / 2;
        cout << A[mid] << ' ' << A[mid + k] << endl;
        if (x - A[mid] > A[mid + k] - x) {
            left = mid + 1;
        }
        else
            right = mid;
    }
    return vector<int>(A.begin() + left, A.begin() + left + k);
}

int main() {
    vector<int> arr{12, 16, 22, 30, 35, 39, 42, 45, 48, 50, 53, 55, 56};
    int x = 35, k = 4;
    vector<int> res = findClosestElements(arr, k, x);
    for (auto i : res) cout << i << ' ';
}