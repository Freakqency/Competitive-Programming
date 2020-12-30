void almostSorted(vector<int> arr) {
    int n = arr.size();

    vector<int> temp(n);
    for (int i = 0; i < n; i++)
        temp[i] = arr[i];
    
    sort(temp.begin(), temp.end());
    if (temp == arr){
        cout << "yes" << endl;
        return;
    }

    int i;
    for (i = 0; i < n; i++)
        if (temp[i] != arr[i])
            break;
    
    int j;
    for (j = n - 1; j >= 0; j--)
        if (temp[j] != arr[j])
            break;

    swap (arr[i], arr[j]);
    if (temp == arr){
        cout << "yes" << endl;
        cout << "swap" << " " << i + 1 << " " << j + 1 << endl;
        return;
    }

    swap(arr[i], arr[j]);
    reverse(arr.begin() + i, arr.begin() + j + 1);
    if (temp == arr){
        cout << "yes" << endl;
        cout << "reverse" << " " << i + 1 << " " << j + 1 << endl;
        return;
    }

    cout << "no" << endl;
}
