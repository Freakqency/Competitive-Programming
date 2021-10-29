#include <bits/stdc++.h>

using namespace std;


vector<int> findThreeLargestNumbers(vector<int> array) {
	int largest = array[0], larger = array[1], large = array[2];
	array[0] = 0;
	array[1] = 0;
	array[2] = 0;
	for (int i = 3; i < array.size(); i++) {
		if (array[i] > largest) {
			int temp = largest;
			largest = array[i];
			array.push_back(temp);
			array[i] = 0;
		} else if (array[i] > larger) {
			int temp = larger;
			larger = array[i];
			array.push_back(temp);
			array[i] = 0;
		} else if (array[i] > large){
			int temp = large;
			large = array[i];
			array.push_back(temp);
			array[i] = 0;
		}
		cout << largest << ' ' << larger << ' ' << large << endl;
		for (auto j : array) cout << j << ' ';
		cout << endl;
	}
	int c = max(largest, max(large, larger));
	int b = max(larger, large);
	int a = min(larger, large);
	vector<int> res{a, b, c};
	return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    vector<int> arr{7, 8, 3, 11, 43, 55};
    vector<int> res = findThreeLargestNumbers(arr) ;
	for (auto i : res) cout << i << ' ';
    return 0;
}
