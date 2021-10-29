void stockBuySell(int arr[], int n){
    int profit = 0, buy = -1, sell = -1;
    bool flag = 0;
    for (int i = 1; i < n; i++){
        if (arr[i] > arr[i - 1]){
            if (flag == 0){
                buy = i - 1;
                flag = 1;
            }
        }
        
        if (buy != -1 && arr[i] < arr[i - 1]){
            sell = i -1;
            cout << "(" << buy << " " << sell << ") " ;
            profit += arr[sell] - arr[buy];
            buy = -1;
            flag = 0;
        }
        
        if (buy != -1 && i == n - 1){
            sell = i;
            cout << "(" << buy << " " << sell << ") " ;
            profit += arr[sell] - arr[buy];
            
        }
    }
    
    if (profit == 0)
        cout << "No Profit";
            
}
