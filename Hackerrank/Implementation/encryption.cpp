string encryption(string s) {
    string::iterator end_pos = remove(s.begin(), s.end(), ' ');
    s.erase(end_pos, s.end());
    
    int l = s.length();
    int r = floor(sqrt(l));
    int c = ceil(sqrt(l));

    if (r * c < l)
        r = c;

    char arr[r][c];
    int k = 0;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            arr[i][j] = s[k++];
    
    string res;
    for (int i = 0; i < c; i++){
        for (int j = 0; j < r; j++){
            if (arr[j][i] == '\0')
                break;
            res += arr[j][i];
        }
            
        res += ' ';
    }

    return res;
}
