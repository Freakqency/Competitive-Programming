#include<bits/stdc++.h>

using namespace std;

bool isPrime(int N){
	int arr[1000];

	for (int i = 0; i <= N; i++)
		arr[i] = 1;

	arr[0] = 0;
	arr[1] = 0;

	for (int i = 2; i <= N; i++)
		if (arr[i] == 1){
			for (int j = 2; j*i <= N; j++){
				arr[i*j] = 0; 
			}
		}
	if (arr[N] == 1)
		return true;

	return false;
}

int main(){
	int count = 0;
	int N = 6;
	
	for (int i = 2; i*i <= N; i++){
		if (isPrime(i)){
			count++;
		}
	}
	
	cout <<  count;
}