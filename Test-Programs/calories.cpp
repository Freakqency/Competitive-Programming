#include<bits/stdc++.h>

using namespace std;

int main(){
   vector<int> calories{1,2,4,3,3,1};
   int sum = calories.at(0);
   int window = 0;
   int n = calories.size();
   int days = 0;
   int i = 0;
   int j;
   while (i < n){
       for (i; i < n - 1; i++){
           if (calories.at(i + 1) > calories.at(i)){
               sum += calories.at(i + 1);
           }
           else{
               days++;
               break;
           }
       }

       for (i; i < n - 1; i++){
           if (calories.at(i + 1) <= calories.at(i)){
               sum -= calories.at(i - 1);
           }
           else if (calories.at(i + 1) > calories.at(i)){
               days++;
               break;
           }

           if (sum == 0){
               days++;
               break;
           }
       }
   }

   cout << days << endl;
}
