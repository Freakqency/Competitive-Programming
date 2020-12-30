int equilibriumPoint(long long arr[], int n) {
    if (n == 1)
        return 1;
        
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
        
    int left_sum = arr[0];
    for (int i = 1; i < n; i++){
        if (left_sum == (sum - arr[i] - left_sum))
            return i + 1;
            
        left_sum += arr[i];
    }
    
    return -1;
}
