#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> v2{1, 2, 3, 4, 6, 6, 7, 8, 9, 10};
    string s1 = "Hello Wold";
    string s2 = "Hello World";
    pair< vector<int>::iterator,vector<int>::iterator> mispair; 
    pair<string::iterator, string::iterator> mistring;
    mispair = mismatch(v1.begin(), v1.end(), v2.begin());
    mistring = mismatch(s1.begin(), s1.end(), s2.begin());
    cout << *mistring.second << endl;
}
