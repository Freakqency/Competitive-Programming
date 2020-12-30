vector<int> icecreamParlor(int m, vector<int> arr) {
    vector<int> res;
    for (int i = 0; i < arr.size(); i++) { 
        bool flag = false;       
        for (int j = i+1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == m) {
                res.push_back(i+1);
                res.push_back(j+1);
                flag = true;
                break;                
            }
        }
        if (flag)
            break;
    }
    return res;
}

