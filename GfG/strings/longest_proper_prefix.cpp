#include<bits/stdc++.h>

using namespace std;

int LPS(string str, int n) {
    for (int i = n; i > 0; i--) {
        bool flag = true;
        for (int j = 0; j < n; j++) {

        }
    }
}

void fillLPS(int lps[], string str) {
    for (int i = 0; i < (int) str.length(); i++) {
        lps[i] = LPS(str, i+1);
    }
}

int main() {
    string str = "";
    int n = str.length();
    int lps[n];
    fillLPS(lps, str);
}
