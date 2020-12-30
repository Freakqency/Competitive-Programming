#include <bits/stdc++.h>

using namespace std;

int check(string res, string ops) {
    size_t found = ops.find(res[0]);
    if (found == string::npos)
        return -1;
    for (int i = 1; i <(int) res.size(); i++) {
        size_t temp = ops.find(res[i], found+1);        
        if (temp == string::npos)
            return -1;
        found = temp;
    }
    return res.size();
}

void solve(int x1, int y1, vector<pair<int, int>> arr, string ops) {
    string res;
    for (auto i : arr) {
        if (i.first > x1) {
            string temp(i.first-x1, 'U');
            res += temp;
        }
        else if (i.first < x1) {
            string temp(x1-i.first, 'D');
            res += temp;
        }
        if (i.second > y1) {
            string temp(i.second-y1, 'R');
            res += temp;
        }
        else if (i.second < y1) {
            string temp(y1-i.second, 'L');
            res +=temp;
        }
        int val = check(res, ops);
        if (val != -1) 
            printf("YES %d\n", val);
        else 
            printf("NO\n");
    }
}

int main() {
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;
    scanf("%d", &t);
    while (t--) {
        int maxv = 1e6;
        char opsc[maxv];
        scanf("%s", opsc);
        string ops(opsc);
        int x1, y1, q;
        scanf("%d %d", &x1, &y1);
        scanf("%d", &q);
        vector<pair<int, int>> arr;
        for (int i = 0; i < q; i++) {
            int n1, n2;
            scanf("%d %d", &n1, &n2);
            arr.push_back(make_pair(n1, n2));
        }
       solve(x1, y1, arr, ops);
    }
    return 0;
}
