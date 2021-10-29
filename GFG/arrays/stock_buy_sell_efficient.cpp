#include <iostream>

using namespace std;

int max_profit(int price[], int n){
    int profit = 0;
    for (int i = 1; i < n + 1; i++)
        if (price[i] > price[i - 1])
            profit += price[i] - price[i - 1];

    return profit;
}

int main(){
    int price[] = {1, 5, 3, 8, 12};
    int n = 4;
    cout << max_profit(price, n) << endl;
}
