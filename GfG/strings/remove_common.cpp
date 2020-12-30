#include <bits/stdc++.h>

using namespace std;

string concatenatedString(string s1, string s2) { 
    string res;
    
    for (int i = 0; i < s1.length(); i++)
        if (s2.find(s1[i]) == string::npos)
            res += s1[i];
    
    
    for (int i = 0; i < s2.length(); i++)
        if (s1.find(s2[i]) == string::npos)
            res += s2[i];
    
    
    if (res.empty())
        res = "-1";
        
    return res;
}

/* Alt Soltion
string concatenatedString(string s1, string s2) { 
    int hash1[26] = {0};
    int hash2[26] = {0};
    
    for (int i = 0; i < s1.length(); i++)
        hash1[s1[i] - 'a']++;
    for (int i = 0; i < s2.length(); i++)
        hash2[s2[i] - 'a']++;
        
    string res;
    for (int i = 0; i < s1.length(); i++)
        if (hash2[s1[i] - 'a'] == 0)
            res += s1[i];
            
    for (int i = 0; i < s2.length(); i++)
        if (hash1[s2[i] - 'a'] == 0)
            res += s2[i];
            
    if (res.empty())
        res = "-1";
                
    return res;
}
*/

int main(){
    string str1 = "aacdb";
    string str2 = "gafd";
    cout << concatenatedString(str1, str2) << endl;
}
