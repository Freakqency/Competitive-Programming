#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    string str = ".1";
    string num = "";
    int i;
    for (i = 0; i < (int)str.length(); i++) {
        if (str[i] == ' ') {
            continue;
        } else {
            break;
        }
    }
    if (str[i] == '+' || str[i] == '-') {
        num += str[i++];        
    } else {
        if (isalpha(str[i])) {
            return 0;
        }
    }
    while (isdigit(str[i])) {
        num += str[i++];
    }
    ll res = stoll(num);
    if (res < INT_MIN) {
        return INT_MIN;
    }
    else if (res > INT_MAX) {
        return INT_MAX;
    }
    else {
        return res;
    }
}
