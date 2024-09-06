#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, M; cin >> N >> M;
    int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
    int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};
    int map[500][500];
    loop(i, N) loop(j, N) map[i][j] = INT_MAX;
    int sx, sy; cin >> sx >> sy; sx--; sy--;
    queue<int> que;
    que.push(sx * N + sy);
    map[sx][sy] = 0;
    while(!que.empty()){
        int cx = que.front() / N;
        int cy = que.front() % N;
        que.pop();
        loop(k, 8){
            int tx = cx + dx[k];
            int ty = cy + dy[k];
            if(tx < 0 || ty < 0 || tx >= N || ty >= N) continue;
            if(map[tx][ty] <= map[cx][cy] + 1) continue;
            map[tx][ty] = map[cx][cy] + 1;
            que.push(tx * N + ty);
        }
    }
    while(M--){
        int x, y; cin >> x >> y; x--; y--;
        cout << map[x][y] << " ";
    }
    return 0;
}