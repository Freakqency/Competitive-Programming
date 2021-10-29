#include <bits/stdc++.h>

using namespace std;

bool check_palindrome(string str, int start, int end) {
    if (start >= end) return true;
    return (str[start] == str[end]) && check_palindrome(str, start + 1, end - 1);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    string str = "abbac";
    string check = str;
    reverse(check.begin(), check.end());
    bool val = (check == str) ? 1 : 0;
    cout << check_palindrome(str, 0, 4) << endl;
    cout << val << endl;
    return 0;
}
