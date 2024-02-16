#include <iostream>
#include <queue>
#include <utility>
#define endl '\n'
using namespace std;
char ch;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
int depth[100][100] = {0, }, N, M;
bool maze[100][100];
bool visited[100][100];
void BFS(int row, int column){
    queue<pair<int,int>> que;
    visited[row][column] = true;
    que.push(make_pair(row, column));
    while(!que.empty()){
        int x = que.front().first;
        int y = que.front().second;
        for(int n = 0 ; n < 4 ; n++){
            int mov_x = x + dx[n];
            int mov_y = y + dy[n];
            if(!visited[mov_x][mov_y] && mov_x >= 0 && mov_y >= 0 && mov_x < N
                && mov_y < M && maze[mov_x][mov_y]){
                que.push(make_pair(mov_x, mov_y));
                visited[mov_x][mov_y] = true;
                depth[mov_x][mov_y] = depth[x][y] + 1;
            }
        }
        que.pop();
    }
}
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> N >> M;
    for(int n = 0 ; n < N ; n++){
        cin.ignore();
        for(int m = 0 ; m < M ; m++){
            cin >> ch;
            if(ch == '1') maze[n][m] = true;
        }
    }
    BFS(0, 0);
    cout << depth[N - 1][M - 1] + 1 << endl;
    return 0;
}