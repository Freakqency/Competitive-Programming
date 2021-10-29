void miniMaxSum(vector<int> arr) {
    unsigned long int min_val = ULONG_MAX;
    unsigned long int max_val = 0;
    unsigned long int total_sum = 0;
    for (int i = 0; i < 5; i++){
        total_sum += arr[i];
        min_val = min<unsigned long>(min_val, arr[i]);
        max_val = max<unsigned long>(max_val, arr[i]);
    }
    cout << total_sum-max_val << " " << total_sum-min_val << endl;
}
