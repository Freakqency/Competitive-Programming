vector<string> cavityMap(vector<string> grid) {
    int n = grid.size();
    for (int i = 0; i < n; i++){
        for (int j = 0; j < grid[i].length(); j++){
            if (i != 0 && j != 0 && i != n - 1 && j != n - 1){
                if (grid[i][j] - '0' > grid[i + 1][j] - '0' &&
                    grid[i][j] - '0' > grid[i - 1][j] - '0' &&
                    grid[i][j] - '0' > grid[i][j + 1] - '0' &&
                    grid[i][j] - '0' > grid[i][j - 1] - '0'
                )
                    grid[i][j] = 'X';
            }
        }
    }

    return grid;    
}
