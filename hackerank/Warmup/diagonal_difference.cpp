int diagonalDifference(vector<vector<int>> arr) {
    int sum_primary = 0;
    int sum_secondary = 0;
    int r = arr.size();
    int c = arr[0].size();

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++){
            if (i == j)
                sum_primary += arr[i][j];
            if (i+j == r-1)
                sum_secondary += arr[i][j];
        }
            
    
    return abs(sum_primary - sum_secondary);
}
