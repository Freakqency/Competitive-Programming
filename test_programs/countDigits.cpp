#include <iostream>

using namespace std;

int main(){
    int val = 44444;
    int count = 0;
    while (val != 0){
        val = val /10;
        count++;
    }
    cout << count;
}
