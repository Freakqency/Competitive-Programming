#include <bits/stdc++.h>

using namespace std;

vector<int> twoNumberSum(vector<int> arr, int target)  {
    // O(n)^2 Solution
    vector<int> out;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && (arr[i] + arr[j]) == target) {
                return vector<int>{arr[i], arr[j]};
                arr[i] = 0;
                arr[j] = 0;
            }
        }
    }
    return {};
}

vector<int> twoNumberSum_eff(vector<int> arr, int target) {
    //O(n) Solution
    int n = arr.size();
    vector<int> out;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }
    for (int i = 0; i < n; i++) {
        int needed = target - arr[i];
        if (needed != arr[i] && mp[needed]) {
            out.push_back(needed);
            mp[needed]--;
            out.push_back(arr[i]);
            mp[arr[i]]--;
        }
    }
    return out;
}

int binary_search(int l, int r, vector<int> arr, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x) return mid;
        else if (arr[mid] > x) r = mid - 1;
        else l = mid + 1;
    }
    return -1;
}

vector<int> twoNumber_bin(vector<int> arr, int target) {
    // O(n(log(n))) Solution
    sort(arr.begin(), arr.end());
    int n = arr.size();
    vector<int> out;
    for (int i = 0; i < n; i++) {
        int needed = target - arr[i];
        int j = binary_search(0, n, arr, needed);
        if (j != -1 && i != j) {
            out.push_back(arr[i]);
            out.push_back(arr[j]);
            arr[i] = 0;
            arr[j] = 0;
        }
    }
    return out;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    vector<int> arr{3, 5, -4, 8, 11, 1, -1, 6};
    int target = 10;
    vector<int> out = twoNumberSum(arr, target);
    for (auto i : out) cout << i << ' ';
    return 0;
}
