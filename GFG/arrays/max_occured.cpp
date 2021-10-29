int maxOccured(int L[], int R[], int n, int maxx){
    int arr[maxx] = {0};
    
    int i = 0;
    while (i < n){
        for (int j = L[i]; j <= R[i]; j++)
            arr[j]++;
        i++;
    }
    
    int max_val = 0, res = 0;
    for (int j = 0; j < maxx; j++){
        if (arr[j] > max_val){
            max_val = arr[j];
            res = j;
        }
    }
    
    return res;
}
