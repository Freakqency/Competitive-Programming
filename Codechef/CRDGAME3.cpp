#include <bits/stdc++.h>

using namespace std;

pair<int, int> solve(int n1, int n2) {
    pair<int, int> res;
    int rick = 0, chef = 0;
    if (n1 > 0 && n1 < 9 && n2 < 0 && n2 < 9) {
        chef++;
        rick++;
       res = make_pair(1, rick);
       return res;
    }
    if (n1 > 0 && n1 < 9) {
        chef++;
    }
    else {
        chef = n1/9;
        if (n1 % 9 != 0) chef++;
    }
    if (n2 > 0 && n2 < 9) {
        rick++;
    }
    else {
        rick = n2/9;
        if (n2 % 9 != 0) rick++;
    }
    if (rick <= chef) {
        res = make_pair(1, rick);        
    }
    else {
        res = make_pair(0, chef);
    }
    return res;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int num1, num2;
        cin >> num1 >> num2;
        pair<int, int> result = solve(num1, num2);
        cout << result.first << " " << result.second << endl;
    }
}
