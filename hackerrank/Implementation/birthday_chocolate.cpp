int birthday(vector<int> s, int d, int m) {
    int window_sum = 0;
    int count = 0;
    for (int i = 0; i < m; i++)
        window_sum += s[i];
    if (window_sum == d)
        count++;
    for (int i = m; i < s.size(); i++){
        window_sum += s[i] - s[i-m];
        if (window_sum == d)
            count++;
    }
    return count;
}

/** naive approach
int birthday(vector<int> s, int d, int m) {
    int window_sum;
    int count = 0;
    for (int i = 0; i < s.size()-m+1; i++){
        window_sum = 0;
        for (int j = 0; j < m; j++){
            window_sum += s[i+j];
        }
        if (window_sum == d)
            count++;
        window_sum = 0;
    }

    return count;
}
**/
