#include <bits/stdc++.h>

using namespace std;

int countVowelSubstrings(string word) {
    int n = word.size();
    map<char, int> mp;
    int cnt = 0;
    for (int i = 0; i < 5; i++) mp[word[i]]++;
    if (mp['a'] != 0 && mp['e'] != 0 && mp['i'] != 0 
            && mp['o'] != 0 && mp['u'] != 0) cnt++;
    for (int i = 5; i < n; i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' 
                || word[i] == 'o' || word[i] == 'u') {
        if (mp['a'] != 0 && mp['e'] != 0 && mp['i'] != 0 
                && mp['o'] != 0 && mp['u'] != 0) cnt++;
        }
    }
    return cnt;
}

int main() {
    string word = "cuaieuouac";
    cout << countVowelSubstrings(word);
}
