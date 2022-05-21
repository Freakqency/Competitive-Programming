#include <bits/stdc++.h>

using namespace std;

vector<string> split_strings(string str) {
    vector<string> result;
    istringstream iss(str);
    copy(istream_iterator<string>(iss), istream_iterator<string>(), 
            back_inserter(result));
    return result;
}

int solve(string str1, string str2) {
    vector<string> s1 = split_strings(str1), s2 = split_strings(str2);
    vector<int> n1, n2;
    transform(s1.begin(), s1.end(), std::back_inserter(n1),
               [](const std::string& str) { return std::stoi(str); });
    transform(s2.begin(), s2.end(), std::back_inserter(n2),
               [](const std::string& str) { return std::stoi(str); });
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s1 = "1", s2;
    while (s1 != "0") {
        if (s1 == "0") break;
        getline(cin, s1);
        getline(cin, s2);
        cout << solve(s1, s2) << '\n';
    }
    return 0;
}
