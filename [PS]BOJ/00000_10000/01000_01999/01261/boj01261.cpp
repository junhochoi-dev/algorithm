#include <iostream>
#include <queue>
#define MAX 100
#define INF 987654321
char table[MAX][MAX];
int wall[MAX][MAX];
int dx[] = { 1, -1, 0, 0 };
int dy[] = { 0, 0, 1, -1 };
int N, M;
using namespace std;
void show() {
    for (int n = 0; n < N; n++) {
        for (int m = 0; m < M; m++) {
            cout << wall[n][m] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}
void BFS() {
    for (int n = 0; n < N; n++) {
        for (int m = 0; m < M; m++) {
            wall[n][m] = INF;
        }
    }
    wall[0][0] = 0;
    queue<pair<int, int>> que;
    que.push(make_pair(0,0));
    while (!que.empty()) {
        int y = que.front().first;
        int x = que.front().second;
        que.pop();
        for (int k = 0; k < 4; k++) {
            int ty = y + dy[k];
            int tx = x + dx[k];
            if (ty < 0 || tx < 0 || ty >= N || tx >= M) continue;
            if(wall[ty][tx] > wall[y][x] + table[ty][tx] - '0') que.push(make_pair(ty, tx));
            wall[ty][tx] = min(wall[ty][tx], wall[y][x] + table[ty][tx] - '0');
        }
        //show();
    }
    cout << wall[N - 1][M - 1] << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> M >> N;
    for (int n = 0; n < N; n++) {
        for (int m = 0; m < M; m++) {
            cin >> table[n][m];
        }
    }
    BFS();
    return 0;
}