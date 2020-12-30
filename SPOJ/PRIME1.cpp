#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int start, end;
        cin >> start >> end;
        vector<int> res;
        for (int i = start; i <= end; i++){
            int flag = 0;
            for (int j = 2; j <= sqrt(i); j++){
                if (i % j == 0){
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                if (i != 1)
                    res.push_back(i);
            flag = 0;
        }
        for (int i : res)
            cout << i << endl;
    }
    return 0;
}
