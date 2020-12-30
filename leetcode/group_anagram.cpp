#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<string> strs{"eat", "tea", "tan", "ate", "nat", "bat"};

    unordered_map<string, vector<string>> mp;
    for (int i = 0; i < strs.size(); i++){
        string temp = strs[i];
        sort(strs[i].begin(), strs[i].end());
        mp[strs[i]].push_back(temp);
    }

    vector<vector<string>> res;
    for (auto it = mp.begin(); it != mp.end(); it++)
        res.push_back(it->second);

    for (int i = 0; i < res.size(); i++)
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
}
