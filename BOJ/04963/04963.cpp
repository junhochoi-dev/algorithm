#include <iostream>
#include <algorithm>
#define endl '\n'
using namespace std;
int W, H, map[50][50], cnt, dx[8] = {1, 0, -1, 0, 1, 1, -1, -1}, dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};
bool visited[50][50];
void DFS(int height, int width){
    visited[height][width] = true;
    for(int n = 0 ; n < 8 ; n++){
        int x = dx[n] + width;
        int y = dy[n] + height;
        if(y >= 0 && y < H && x >= 0 && x < W && !visited[y][x] && map[y][x] == 1) DFS(y, x);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(true){
        cin >> W >> H;
        if(W == 0 && H == 0) break;
        cnt = 0;
        for(int n = 0 ; n < H ; n++) for(int m = 0 ; m < W ; m++) {
            cin >> map[n][m];
            visited[n][m] = false;
        }
        for(int n = 0 ; n < H ; n++) for(int m = 0 ; m < W ; m++) if(!visited[n][m] && map[n][m] == 1) {
            DFS(n, m);
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}