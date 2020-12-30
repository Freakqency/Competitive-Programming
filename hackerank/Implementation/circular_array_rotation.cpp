// Using STL rotate O(n)
vector<int> circularArrayRotation(vector<int> arr, int k, vector<int> queries) {
    vector<int> result;
    int n = arr.size();

    if (k > n)
        k %= n;

    rotate(arr.begin(), arr.begin() + arr.size()-k, arr.end());

    for (int i = 0; i < queries.size(); i++)
        result.push_back(arr[queries[i]]);

    return result;
}

// O(1) Solution
vector<int> circularArrayRotation(vector<int> arr, int k, vector<int> queries) {
    int n = arr.size();
    k %= n;
    vector<int> result;

    for (int i = 0; i < queries.size(); i++)
        if (queries[i] - k >= 0)
            result.push_back(arr[queries[i] - k]);
        else
            result.push_back(arr[queries[i] - k + n]);

    return result;
}
