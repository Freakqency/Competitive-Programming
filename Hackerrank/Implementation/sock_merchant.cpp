int sockMerchant(int n, vector<int> ar) {
    map<int, int> hash;
    for (int i = 0; i < n; i++)
        hash[ar[i]]++;
    int result = 0;
    for (auto i : hash){
        result += i.second/2;
    }
    return result;
}
