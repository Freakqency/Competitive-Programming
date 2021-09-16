#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n = 10, count = 0, num = 2;
    while (true) {
        if (count == n) break;
        string snum = to_string(num);
        int flag = 0;
        for (int i = 0; i <(int) snum.length(); i++){
            if (snum[i] - '0' != 2 || snum[i] - '0' != 3 || snum[i] - '0' != 5 || snum[i] - '0' != 7) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            count++;
            cout << num << endl;
        }
        num++;
    }        
    return 0;
}
