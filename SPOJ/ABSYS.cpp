#include <bits/stdc++.h>

using namespace std;

string solve(string equation) {
    istringstream ss(equation);
    vector<string> words;
    string word, result = "";
    while (ss >> word) words.push_back(word);
    int op1 = -1, op2 = -1, output = -1;
    if (words[0].find('m') == string::npos) op1 = stoi(words[0]);
    if (words[2].find('m') == string::npos) op2 = stoi(words[2]);
    if (words[4].find('m') == string::npos) output = stoi(words[4]);
    if (op1 == -1) op1 = output - op2;
    else if (op2 == -1) op2 = output - op1;
    else if (output == -1) output = op1 + op2;
    result += to_string(op1);
    result += ' ';
    result += '+';
    result += ' ';
    result += to_string(op2);
    result += ' ';
    result += '=';
    result += ' ';
    result += to_string(output);
    return result;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    int t; cin >> t;
    while (t--) {
        string equation;
        cin.ignore();
        getline(cin, equation);
        while (equation.length() == 0) getline(cin, equation);
        cout << solve(equation) << endl;
    }
    return 0;
}
