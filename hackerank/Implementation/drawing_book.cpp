int pageCount(int n, int p) {
    int count1 = p/2;
    int count2;
    if (n % 2 == 0) 
        count2 = (n - p + 1) / 2;
    else 
        count2 = (n - p) / 2;
    return min(count1, count2);
}
