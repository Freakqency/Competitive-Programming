int lonelyinteger(vector<int> a) {
    int res = 0;
    for (int i = 0; i < a.size(); i++)
        res ^= a[i];
    return res;
}
