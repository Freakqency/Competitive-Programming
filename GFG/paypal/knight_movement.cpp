#include<bits/stdc++.h>

using namespace std;

struct cell{
    int x, y, dis;
    cell() {}
    cell(int x, int y, int dis) : x(x), y(y), dis(dis) {}
};

bool isInside(int x, int y, int n) {
    if (x > 1 && x <= n && y > 1 && y <= n) return true;
    return false;
}

int minStepsToTarget(int knightpos[], int targetpos[], int n) {
    int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
    int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};
    queue<cell> que;
    que.push(cell(knightpos[0], knightpos[1], 0));
    cell t;
    int x, y;
    bool visited[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            visited[i][j] = false;
    visited[knightpos[0]][knightpos[1]] = true;
    while (!que.empty()) {
        t = que.front();
        que.pop();
        if (t.x == targetpos[0] && t.y == targetpos[1]) return t.dis;
        for (int i = 0; i < 8; i++) {
            x = t.x + dx[i];
            y = t.y + dy[i];
            if (isInside(x, y, n) && !visited[x][y]) {
                visited[x][y] = true;
                que.push(cell(x, y, t.dis + 1));
            }
        }
    }
}

int main() {
    int knightpos[] = {1, 1}, targetpos[] = {30, 30}, n = 30;
    cout << minStepsToTarget(knightpos, targetpos, n) << endl;;
}