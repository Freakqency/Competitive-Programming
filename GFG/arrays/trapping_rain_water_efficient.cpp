#include <bits/stdc++.h>

using namespace std;

int trap(vector<int>& height) {
    int res = 0, n = height.size(), rmax[n], lmax[n];
    lmax[0] = height[0];
    for (int i = 1; i < n -1; i++)
        lmax[i] = max(height[i], lmax[i - 1]);
    rmax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 1; i--)
        rmax[i] = max(height[i], rmax[i + 1]);
    for (int i = 1; i < n - 1; i++)
        res += min(lmax[i], rmax[i]) - height[i];
    return res;
}

int main(){
    vector<int> height{10, 20, 1, 3, 4, 5};
    return 0;
}
