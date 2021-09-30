#include<bits/stdc++.h>

using namespace std;

string solve(int r, int c, vector<vector<char>> arr) {
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++) 
			if (arr[i][j] == 'C' || arr[i][j] == 'M' || arr[i][j] == 'Y') return "#Color";
	return "#Black&White";
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int r, c; cin >> r >> c;
  vector<vector<char>> arr(r, vector<char>(c));
  for (int i = 0; i < r; i++)
  	for (int j = 0; j < c; j++)
  		cin >> arr[i][j];
  cout << solve(r, c, arr) << '\n';
  return 0;
}