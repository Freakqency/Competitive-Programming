#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr={1, 2, 3, 4};
    auto mul = accumulate(arr.begin() + 2, arr.end(), 1, multiplies<int>());
    cout << mul << ' ';
    return 0;
}
