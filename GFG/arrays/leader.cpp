vector<int> leaders(int arr[], int n){
    vector<int> res;
    
    int max = arr[n - 1];
    for (int i = n - 1; i >= 0; i--){
        if (arr[i] >= max){
            max = arr[i];
            res.push_back(arr[i]);
        }
    }
    
    reverse(res.begin(), res.end());
    
    return res;
}
