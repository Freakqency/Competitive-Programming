#include <bits/stdc++.h>

using namespace std;

string solve(int n, vector<int> arr) {
    stack<int> main_road, side_road;
    string possible_order = "", sorted_order = "";
    int top_ptr = 0;
    for (int i = n-1; i >= 0; i--) main_road.push(arr[i]);
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) sorted_order += to_string(arr[i]);
    while (!main_road.empty()) {
        if (main_road.top() == arr[top_ptr]) {
            possible_order += to_string(main_road.top());
            main_road.pop();
            top_ptr++;
        } else {
            while (!side_road.empty() && side_road.top() == arr[top_ptr]) {
                possible_order += to_string(side_road.top());
                side_road.pop();
                top_ptr++;
            }
            side_road.push(main_road.top());
            main_road.pop();
        }
    }
    while (!side_road.empty()) {
        possible_order += to_string(side_road.top());
        side_road.pop();
    }
    return (possible_order == sorted_order) ? "yes" : "no";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n = 1;
    while (n != 0) {
        cin >> n;
        if (n == 0) break;
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << solve(n, arr) << '\n';
    }
    return 0;
}
