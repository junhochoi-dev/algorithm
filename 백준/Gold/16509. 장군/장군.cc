#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int ROW = 10, COL = 9;
    int map[ROW][COL];
    loop(i, ROW) loop(j, COL) map[i][j] = INT_MAX;
    int r1, c1; cin >> r1 >> c1;
    int r2, c2; cin >> r2 >> c2;
    int dx[] = {3, 3, 2, 2, -2, -2, -3, -3};
    int dy[] = {2, -2, 3, -3, 3, -3, 2, -2};
    int ddx[8][2] = {
            {1, 2}, {1, 2},
            {0, 1}, {0, 1},
            {0, -1}, {0, -1},
            {-1, -2}, {-1, -2}
            };
    int ddy[8][2] = {
            {0, 1}, {0, -1},
            {1, 2}, {-1, -2},
            {1, 2}, {-1, -2},
            {0, 1}, {0, -1}
    };
    queue<pair<int, int>> queue; queue.push(make_pair(r1, c1)); map[r1][c1] = 0;
    while(!queue.empty()){
        int x = queue.front().first;
        int y = queue.front().second;
        queue.pop();

        loop(k, 8){
            int nx = x + dx[k];
            int ny = y + dy[k];
            if(nx < 0 || ny < 0 || nx >= ROW || ny >= COL) continue;
            if(map[nx][ny] <= map[x][y] + 1) continue;
            if(r2 == x + ddx[k][0] && c2 == y + ddy[k][0]) continue;
            if(r2 == x + ddx[k][1] && c2 == y + ddy[k][1]) continue;
            map[nx][ny] = map[x][y] + 1;
            queue.push(make_pair(nx, ny));
        }
    }
    cout << (map[r2][c2] == INT_MAX ? -1 : map[r2][c2]) << endl;
    return 0;
}
