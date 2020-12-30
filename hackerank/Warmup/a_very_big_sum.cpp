long aVeryBigSum(vector<long> ar) {
    long  sum = accumulate(ar.begin(), ar.end(), 0L);
    return sum;
}
