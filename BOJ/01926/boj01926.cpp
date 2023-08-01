#include <iostream>
#include <algorithm>
using namespace std;
#define MAXSIZE 500
int N, M, picSize, picMaxSize = 0;
int table[MAXSIZE][MAXSIZE];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
bool visited[MAXSIZE][MAXSIZE];
void DFS(int y, int x){
    picSize++;
    visited[y][x] = true;
    for(int n = 0 ; n < 4 ; n++){
        int ty = y + dy[n];
        int tx = x + dx[n];
        if(tx < 0 || ty < 0 || tx >= M || ty >= N) continue;
        if(visited[ty][tx] || table[ty][tx] == 0) continue;
        DFS(ty, tx);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("input.txt", "r", stdin);
    cin >> N >> M;
    for(int n = 0 ; n < N ; n++){
        for(int m = 0 ; m < M ; m++){
            cin >> table[n][m];
        }
    }
    int cnt = 0;
    for(int n = 0 ; n < N ; n++){
        for(int m = 0 ; m < M ; m++){
            picSize = 0;
            if(!visited[n][m] && table[n][m] == 1){
                DFS(n,m);
                picMaxSize = max(picMaxSize, picSize);
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    cout << picMaxSize << endl;
    return 0;
}
