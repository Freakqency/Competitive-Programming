int minAdjDiff(int arr[], int n){
    int min_diff = abs(arr[n - 1] - arr[0]);
    for (int i = 1; i < n; i++)
        min_diff = min(min_diff, abs(arr[i] - arr[i - 1]));
        
    return min_diff;
}
