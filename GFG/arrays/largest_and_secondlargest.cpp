/*
vector<int> largestAndSecondLargest(int n, int arr[]){
    vector<int> res;
    
    int m1 = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] > m1)
            m1 = arr[i];
            
    for (int i = 0; i < n; i++)
        if (arr[i] == m1)
            arr[i] = -2;
            
    int m2 = -2;
    for (int i = 0; i < n; i++)
        if (arr[i] > m2 && arr[i] != -2)
            m2 = arr[i];
            
    res.push_back(m1);
    if (m2 == -2)
        m2 = -1;
    res.push_back(m2);
    
    return res;
}
*/

// Optimized Solution
vector<int> largestAndSecondLargest(int n, int arr[]){
    vector<int> res;
    
    int m1 = -2;
    int m2 = -2;
    
    for (int i = 0; i < n; i++)
        if (arr[i] > m1){
            m2 = m1;
            m1 = arr[i];
        }
        else if (arr[i] > m2 && arr[i] != m1)
            m2 = arr[i];
            
    if (m1 == m2 || m2 == -2)
        m2 = -1;
    
    res.push_back(m1);
    res.push_back(m2);
    
    return res;
}
