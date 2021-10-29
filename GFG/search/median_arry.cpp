#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int arr[] = {1,2}, brr[] = {2,3,4}, n = 2, m = 3, result;
    vector<int> merged;
    for (int i = 0; i < n; i++)
        merged.push_back(arr[i]);
    for (int i = 0; i < m; i++)
        merged.push_back(brr[i]);
    sort(merged.begin(), merged.end());
    int merged_size = merged.size();
    //1 2 3 3 4 4 5 5 6 7 8 
    result = (merged_size % 2 != 0) ? merged[merged_size/2] : (merged[merged_size/2] + merged[merged_size/2+1])/2;
    cout << result;
}
