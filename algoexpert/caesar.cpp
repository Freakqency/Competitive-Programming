#include <bits/stdc++.h>

using namespace std;

string caesarCypherEncryptor(string str, int key) {
	string res;
	int n = str.length();
    int new_key = key % 26;
	for (int i = 0; i < n; i++) {
		int val = int(str[i]) + new_key;
		res += char(val);
	}
  return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    string str = "xyz";
    int key = 2;
    cout << caesarCypherEncryptor(str, key) << endl;
    return 0;
}
