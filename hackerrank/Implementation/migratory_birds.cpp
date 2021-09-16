//Using hashmaps
int migratoryBirds(vector<int> arr) {
    map<int, int> hash;
    for (int i = 0; i < arr.size(); i++)
        hash[arr[i]]++;

    vector<int> values;
    int max = 0;

    for (auto i : hash)
        if (i.second > max)
            max = i.second;

    for (auto i : hash)
        if (i.second == max)
            values.push_back(i.first);
            
    sort(values.begin(), values.end());
    return values[0];
}
