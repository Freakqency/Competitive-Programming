#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int n = 10;
    string res;
    while (n) {
        int rem = n % 4;
        switch(rem) {
            case 1: res.push_back('2');
                    break;
            case 2: res.push_back('3');
                    break;
            case 3: res.push_back('5');
                    break;
            case 0: res.push_back('7');
                    break;
        }
        if (n % 4 == 0) n--;
        n /= 4;
    }
    reverse(res.begin(), res.end());
    cout << res << endl;
    return 0;
}
