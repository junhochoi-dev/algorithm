#include <iostream>
#include <algorithm>
#define endl '\n'
using namespace std;
char map[20][20];
int N, M, dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1}, depth[20][20], ans = 1;
bool visited[20][20], alphabet[26];
void DFS(int row, int column){
    visited[row][column] = true;
    alphabet[map[row][column] - 'A'] = true;
    for(int n = 0 ; n < 4 ; n++){
        int r = dx[n] + row;
        int c = dy[n] + column;
        if(r >= 0 && r < N && c >= 0 && c < M && !visited[r][c] && !alphabet[map[r][c] - 'A']) { 
            depth[r][c] = depth[row][column] + 1;
            ans = max(ans, depth[r][c]);
            DFS(r, c);
        }
    }
    visited[row][column] = false;
    alphabet[map[row][column] - 'A'] = false;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    for(int n = 0 ; n < N ; n++) for(int m = 0 ; m < M ; m++) depth[n][m] = 1;
    for(int n = 0 ; n < N ; n++){
        cin.ignore();
        for(int m = 0 ; m < M ; m++) cin >> map[n][m];
    }
    for(int n = 0 ; n < 26 ; n++) alphabet[n] = false;
    DFS(0, 0);
    cout << ans << endl;
    return 0;
}