int simpleArraySum(vector<int> ar) {
    int sum = accumulate(ar.begin(), ar.end(), 0);
    return sum;
}
