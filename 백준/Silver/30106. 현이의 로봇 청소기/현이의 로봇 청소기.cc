#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, M, K, answer = 0;
    int map[500][500];
    bool visited[500][500];
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    cin >> N >> M >> K;
    loop(i, N) loop(j, M) {
        cin >> map[i][j];
    }
    loop(i, N) loop(j, M) {
        if(visited[i][j]) continue;
        visited[i][j] = true;
        queue<int> que;
        que.push(i * M + j);
        answer++;
        while(!que.empty()){
            int cx = que.front() / M;
            int cy = que.front() % M;
            que.pop();
            loop(k, 4){
                int tx = cx + dx[k];
                int ty = cy + dy[k];
                if(tx < 0 || ty < 0 || tx >= N || ty >= M) continue;
                if(visited[tx][ty]) continue;
                if(abs(map[cx][cy] - map[tx][ty]) > K) continue;
                visited[tx][ty] = true;
                que.push(tx * M + ty);
            }
        }
    }
    cout << answer;
    return 0;
}
