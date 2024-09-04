#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    char A[50][50], B[50][50];
    bool visited[50][50];
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    int N, M; cin >> N >> M;
    loop(i, N) loop(j, M) visited[i][j] = false;
    loop(i, N) {
        string tmp; cin >> tmp;
        loop(j, M) A[i][j] = tmp[j];
    }
    loop(i, N) {
        string tmp; cin >> tmp;
        loop(j, M) B[i][j] = tmp[j];
    }
    loop(i, N) loop(j, M) {
        if(visited[i][j]) continue;
        char group = A[i][j];
        char change = B[i][j] + 32;
        queue<int> que;
        que.push(i * M + j);
        visited[i][j] = true; A[i][j] = change;
        while(!que.empty()){
            int cx = que.front() / M;
            int cy = que.front() % M;
            que.pop();
            loop(k, 4){
                int tx = cx + dx[k];
                int ty = cy + dy[k];
                if(tx < 0 || ty < 0 || tx >= N || ty >= M) continue;
                if(visited[tx][ty]) continue;
                if(A[tx][ty] != group) continue;
                visited[tx][ty] = true; A[tx][ty] = change;
                que.push(tx * M + ty);
            }
        }
    }
    bool answer = true;
    loop(i, N) loop(j, M){
        if(!(A[i][j] == B[i][j] || A[i][j] == B[i][j] + 32)){
            answer = false;
            break;
        }
    }
    cout << (answer ? "YES" : "NO") << endl;
    return 0;
}