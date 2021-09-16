#include<bits/stdc++.h>

using namespace std;

bool divisible_by_eight(string num) {
    int n = num.size();
    if (n == 0) return false;
    if (n == 1 || n == 2) return stoi(num) % 8;
    int last = (int) num[n - 1];
    int second_last = (int) num[n - 2];
    int third_last = (int) num[n - 3];
    return ((third_last * 100 + second_last * 10 + last) % 8 == 0);
}

int main() {
    string num = "363588395960667043875128";
    cout << divisible_by_eight(num);
}