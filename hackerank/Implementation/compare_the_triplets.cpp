vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> result(2);

    for (int i = 0; i < a.size(); i++)
        if (a[i] > b[i])
            result[0]++;            
        else if (b[i] > a[i])
            result[1]++;
            
    return result;
}
