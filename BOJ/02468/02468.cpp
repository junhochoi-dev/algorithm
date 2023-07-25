#include <iostream>
#include <algorithm>
#define endl '\n'
using namespace std;
int N, map[100][100], dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1}, ground, ans = 1;
bool visited[100][100];
void DFS(int row, int column, int height){
    visited[row][column] = true;
    for(int n = 0 ; n < 4 ; n++){
        int r = dx[n] + row;
        int c = dy[n] + column;
        if(r >= 0 && r < N && c >= 0 && c < N && !visited[r][c] && map[r][c] > height) DFS(r, c, height);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    for(int n = 0 ; n < N ; n++) for(int m = 0 ; m < N ; m++) cin >> map[n][m];
    for(int k = 1 ; k <= 100 ; k++){
        ground = 0;
        for(int n = 0 ; n < N ; n++) for(int m = 0 ; m < N ; m++) visited[n][m] = false;
        for(int n = 0 ; n < N ; n++) for(int m = 0 ; m < N ; m++) if(!visited[n][m] && map[n][m] > k) {
            DFS(n, m, k);
            ground++;
        }
        ans = max(ans, ground);
    }
    cout << ans << endl;
    return 0;
}