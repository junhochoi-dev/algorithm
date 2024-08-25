#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N; cin >> N;
    int map[64][64];
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    bool visited[64][64];
    loop(i, N) loop(j, N) cin >> map[i][j];
    queue<int> que; que.push(0); visited[0][0] = true;
    while(!que.empty()){
        int x = que.front() / N;
        int y = que.front() % N;
        que.pop();
        loop(k, 4){
            int tx = x + dx[k] * map[x][y];
            int ty = y + dy[k] * map[x][y];
            if(tx < 0 || ty < 0 || tx >= N || ty >= N) continue;
            if(visited[tx][ty]) continue;
            que.push(tx * N + ty); visited[tx][ty] = true;
        }
    }
    cout << (visited[N - 1][N - 1] ? "HaruHaru" : "Hing") << endl;
    return 0;
}