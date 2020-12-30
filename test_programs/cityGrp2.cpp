#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    int* cityGroup = new int[N];
    vector<int> res;
    
    for (int i = 0; i < K; i++){
        int ncity;
        cin >> ncity;
        for (int j = 0; j < ncity; j++){
            int city;
            cin >> city;
            cityGroup[city - 1] = i;
        }
    }
    
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++){
        int X, Y;
        cin >> X >> Y;
        
        int grpValX = cityGroup[X - 1];
        int grpValY = cityGroup[Y - 1];
        int distance = grpValY - grpValX;
        // if (X > Y){
        //     int d = grpValX - grpValY;
            
        //     res.push_back(min(d, N - d));
        // }
        // else{
        //     int d = grpValY - grpValX;
            
        //     res.push_back(min(d, N - d));
        // }
            if(distance < 0) distance *= -1;
            cout << min(distance, N - distance) << endl;
    }
    
    // for (auto i = res.begin(); i != res.end(); i++){
    //     cout << *i << endl;
    // }

}
