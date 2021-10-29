#include<bits/stdc++.h>

using namespace std;

int main(){
	map <char,int> mp;
	const char* str = "hello";
	
	for (int i = 0; i < strlen(str); i++)
		mp[str[i]]++;
	
	for (auto i : mp){
		cout << i.first << " " << i.second << "\n";
	}
}
