int birthdayCakeCandles(vector<int> ar) {
    auto max_val = max_element(ar.begin(), ar.end());
    int count = 0;
    for (int i = 0; i < ar.size(); i++)
        if (ar[i] == *max_val)
            count++;
    return count;
}
