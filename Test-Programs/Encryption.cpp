string encryption(string s) {
    int n = s.length();
    int row = round(sqrt(n));
    int col;

    if (row >= sqrt(n)){
        col = row;
    }
    else{
        col = row + 1;
    }

    string res;
    for (int i = 0; i < col; i++){
        for (int j = i; j < n; j+=col){
            res += s[j];
        }
        res += " ";
    }

    return res;
}
