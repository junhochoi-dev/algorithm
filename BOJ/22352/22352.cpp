#include <iostream>
#include <algorithm>
#include <utility>
#include <queue>

using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

#define SIZE 30
int N, M;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int origin[SIZE][SIZE];
int vaccine[SIZE][SIZE];
bool visited[SIZE][SIZE];
int differentCell = 0, shot_r, shot_c;
void BFS(int sr, int sc, int ori, int vac){
    queue<pair<int, int>> que;
    que.push({sr, sc});
    visited[sr][sc] = true;

    while(!que.empty()){
        int r = que.front().first;
        int c = que.front().second;
        origin[r][c] = vac;
        que.pop();

        for(int k = 0 ; k < 4 ; k++){
            int tr = r + dx[k];
            int tc = c + dy[k];

            if(tr < 0 || tc < 0 || tr >= N || tc >= M) continue;
            if(visited[tr][tc]) continue;
            if(origin[tr][tc] != ori) continue;
            visited[tr][tc] = true;
            que.push({tr, tc});
        }
    }
}
int main() {
    fastio;
    cin >> N >> M;
    for(int n = 0 ; n < N ; n++){
        for(int m = 0 ; m < M ; m++){
            cin >> origin[n][m];
        }
    }
    for(int n = 0 ; n < N ; n++){
        for(int m = 0 ; m < M ; m++){
            cin >> vaccine[n][m];
            if(origin[n][m] != vaccine[n][m]) {
                shot_r = n;
                shot_c = m;
            }
        }
    }
    BFS(shot_r, shot_c, origin[shot_r][shot_c], vaccine[shot_r][shot_c]);
    bool able = true;
    for(int n = 0 ; n < N ; n++){
        for(int m = 0 ; m < M ; m++){
            if(origin[n][m] != vaccine[n][m]){
                able = false;
                break;
            }
        }
        if(!able) break;
    }
    cout << (able ? "YES" : "NO") << endl;
    return 0;
}