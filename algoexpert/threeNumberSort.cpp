#include<bits/stdc++.h>

using namespace std;
// Unoptimized
// int getLastIndex(int num, vector<int> arr, bool flag, vector<int> order) {
//     int n = arr.size(), res;
//     for (int i = 0; i < n; i++) {
//         if (flag == false) {
//             if (arr[i] != num) {
//                 res = i;
//                 break;
//             }
//         }
//         if (arr[i] != order[0] && arr[i] != order[1]) {
//             res = i;
//             break;
//         }
//     }
//     return res;
// }

// vector<int> threeNumberSort(vector<int> arr, vector<int> order) {
//     int n = arr.size();
//     for (int i = 0; i < n; i++) {
//         if (arr[i] != order[0]) {
//             for (int j = i + 1; j < n; j++) {
//                 if (arr[j] == order[0]) {
//                     swap(arr[j], arr[i]);
//                     break;
//                 }                
//             }
//         }
//     }
//     for (int i = getLastIndex(order[0], arr, false, order); i < n; i++) {
//         if (arr[i] != order[1]) {
//             for (int j = i + 1; j < n; j++) {
//                 if (arr[j] == order[1]) {
//                     swap(arr[j], arr[i]);
//                     break;
//                 }                
//             }
//         }
//     }
//     for (int i = getLastIndex(order[1], arr, true, order); i < n; i++) {
//         if (arr[i] != order[2]) {
//             for (int j = i + 1; j < n; j++) {
//                 if (arr[j] == order[2]) {
//                     swap(arr[j], arr[i]);
//                     break;
//                 }                
//             }
//         }
//     }
//     for (auto i : arr) cout << i << ' ';
//     return arr;
// }

int main() {
    vector<int> arr{1, 0, 0, -1, -1, 0, 1, 1}, order{0, 1, -1};
    // threeNumberSort(arr, order);
    return 0;
}