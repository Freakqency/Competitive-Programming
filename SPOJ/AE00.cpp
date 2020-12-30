#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int res = 0;
    for (int l = 1; l <= sqrt(n); l++)
        for (int h = l; h * l <= n; h++)
            res++;
    cout << res << endl;
    return 0;
}
