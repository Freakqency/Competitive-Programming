void arrange(long long arr[], int n) {
    long long temp[n];
    for (int i = 0; i < n; i++)
        temp[i] = arr[i];
    
    for (int i = 0; i < n; i++)
        arr[i] = temp[temp[i]];
}

