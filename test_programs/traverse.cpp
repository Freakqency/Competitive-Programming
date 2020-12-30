#include<bits/stdc++.h>

using namespace std;

int main(){
	int count[256] = {0};
	string str1 = "aacdb";
	string str2 = "gafd";
	string str3("aaaa");
	
	for (int i = 0; i < str1.length(); i++){
		count[str1[i]]++;
	}

	for (int i = 0; i < str2.length(); i++){
		if (count[str2[i]] > 0){
			count[str2[i]] = 0;
		}
		else{
			count[str2[i]]--;
		}
		
	}

	for (int i = 0; i < 256; i++){
		if (count[i] > 0){
			str3 += str1[i];
		}
		else if(count[i] < 0){
			str3 += str2[i];
		}
	}

	cout << str3;
}
