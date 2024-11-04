#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int dist[1000][1000];
char arr[1000][1000];
int main() {
    fastio
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    int N, M, K, answer = 0; cin >> N >> M >> K;
    int CHEEZE[10];
    loop(i, N) {
        string str; cin >> str;
        loop(j, M) {
            arr[i][j] = str[j];
            if(arr[i][j] == 'S') CHEEZE[0] = i * M + j;
            if('1' <= arr[i][j] && arr[i][j] <= '9') CHEEZE[arr[i][j] - '0'] = i * M + j;
        }
    }
    loop(k, K){
        loop(i, N) loop(j, M) dist[i][j] = INT_MAX;
        int sx = CHEEZE[k] / M, sy = CHEEZE[k] % M;
        int ex = CHEEZE[k + 1] / M, ey = CHEEZE[k + 1] % M;
        queue<pair<int, int>> queue;
        queue.push({sx, sy});
        dist[sx][sy] = 0;
        while(!queue.empty()){
            int cx = queue.front().first;
            int cy = queue.front().second;
            queue.pop();
            loop(t, 4){
                int nx = cx + dx[t];
                int ny = cy + dy[t];
                if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
                if(dist[nx][ny] <= dist[cx][cy] + 1) continue;
                if(arr[nx][ny] == 'X') continue;
                dist[nx][ny] = dist[cx][cy] + 1;
                queue.push({nx, ny});
            }
        }
        answer += dist[ex][ey];
    }
    cout << answer << endl;
    return 0;
}

