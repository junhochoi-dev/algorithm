#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, M; cin >> N >> M;
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    bool map[1000][1000], visited[1000][1000], answer = false;
    loop(i, N) {
        string tmp; cin >> tmp;
        loop(j, M) map[i][j] = (tmp[j] == '0');
    }
    queue<int> queue;
    loop(j, M) if(map[0][j]) {
        queue.push(j);
        visited[0][j] = true;
    }
    while(!queue.empty()){
        int x = queue.front() / M;
        int y = queue.front() % M;
        queue.pop();
        loop(k, 4){
            int nx = x + dx[k];
            int ny = y + dy[k];
            if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
            if(visited[nx][ny]) continue;
            if(!map[nx][ny]) continue;
            queue.push(nx * M + ny);
            visited[nx][ny] = true;
            if(nx == N - 1) answer = true;
        }
        if(answer) break;
    }
    cout << (answer ? "YES" : "NO") << endl;
    return 0;
}