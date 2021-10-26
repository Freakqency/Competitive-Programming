#include <bits/stdc++.h>
#include <queue>

using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(4);
    pq.push(5);
    pq.push(1);
    pq.push(2);
    pq.push(3);
    while (!pq.empty()) {
        cout << pq.top() << ' ';
        pq.pop();
    }
    return 0;
}
