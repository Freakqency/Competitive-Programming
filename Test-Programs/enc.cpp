#include <bits/stdc++.h>

using namespace std;

int main(){
    string s = "bgwdyygtmwhtwhusfedckrgybozfjaukgsngqvzftiypqukxypbkghjiwkphkjtsdizueaz";
    int col = ceil(sqrt(s.length()));
    int j = col - 1;
    string str2 = "";
    vector<string> s1;

    for (int i = 0; i < s.length(); i++){
        if (i == j){
            str2 += s[i];
            j += col;
            s1.push_back(str2);
            str2 = "";
        }
        else{
            str2 += s[i];
        }
        if (i == s.length() -1){
            if (str2 != "" || str2 != " " || str2 != "\n"){
                s1.push_back(str2);
            }
        }
    }

    string res1;
    for (int i = 0; i < s1.size(); i++){
        res1 += s1.at(i);
    }

    string res;
    int n = s.length();
    for (int k = 0; k < res1.length(); k++){
        for (int i = 0; i < s1.size(); i++){
            if (s1.at(i)[k] >= 'a' && s1.at(i)[k] <= 'z'){
                res += s1.at(i)[k];
            }
        }
        res += " ";
    }


   cout << res << endl;

   /* Optimized Sol from Discussion
   int main(){
    string s;
    cin >> s;
    auto n = s.size();
    int row = round(sqrt(n));
    int column;
    if (row >= sqrt(n)) column = row; else column = row + 1;
    for(int j=0;j<column;++j) {
        for(int i=j; i<n;i+=column)cout << s[i];
        cout << ' ';
    }
    return 0;
   }
    */
}
