int minIndexChar(string str, string patt){
    
    int idx = str.length() + 1;
    for (int i = 0; i < patt.length(); i++){
        size_t found = str.find(patt[i]);
        if (found != string::npos){
            if (idx > found){
                idx = found;
            }
        }
    }
    return idx == str.length() + 1 ? -1 : idx;
}
