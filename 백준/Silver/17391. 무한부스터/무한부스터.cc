#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int map[300][300], dist[300][300];
    int dx[] = {1, 0}, dy[] = {0, 1};
    int N, M; cin >> N >> M;
    loop(i, N) loop(j, M) {
            cin >> map[i][j];
            dist[i][j] = INT_MAX;
    }
    queue<int> queue;
    queue.push(0); dist[0][0] = 0;
    while(!queue.empty()){
        int curr = queue.front();
        int x = curr / M;
        int y = curr % M;
        queue.pop();
        loop(k, 2){
            loop(b, map[x][y]){
                int booster = b + 1;
                int nx = x + dx[k] * booster;
                int ny = y + dy[k] * booster;
                if(nx >= N || ny >= M) continue;
                if(dist[nx][ny] <= dist[x][y] + 1) continue;
                dist[nx][ny] = dist[x][y] + 1;
                queue.push(nx * M + ny);
            }
        }
    }
    cout << dist[N - 1][M - 1] << endl;
    return 0;
}
