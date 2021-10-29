#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[26] = {0};
    string str = "abcded";
    string res = "";
    for (int i = 0; i < (int) str.length(); i++) {
        arr[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        res += string(arr[i], char(i + 'a'));
    }
    cout << res << endl;
}
