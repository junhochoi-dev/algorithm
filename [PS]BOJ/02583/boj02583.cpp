#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'
#define MAX 101
using namespace std;
int map[MAX][MAX], dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
int N, M, K, ground;
bool visited[MAX][MAX];
vector<int> range;
void DFS(int row, int column){
    visited[row][column] = true;
    ground++;
    for(int n = 0 ; n < 4 ; n++){
        int r = dx[n] + row;
        int c = dy[n] + column;
        if(r >= 0 && r < M && c >= 0 && c < N && !visited[r][c] && map[r][c] == 0) DFS(r, c);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> M >> N >> K;
    for(int n = 0 ; n < M ; n++) for(int m = 0 ; m < N ; m++) { map[n][m] = 0; visited[n][m] = false; }
    for(int k = 0 ; k < K ; k++){
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int n = y1 ; n < y2 ; n++) for(int m = x1 ; m < x2 ; m++) map[n][m]++;
    }
    for(int n = 0 ; n < M ; n++) for(int m = 0 ; m < N ; m++) if(!visited[n][m] && map[n][m] == 0) {
        ground = 0;
        DFS(n, m);
        range.push_back(ground);
    }
    sort(range.begin(), range.end());
    cout << range.size() << endl;
    for(int n = 0 ; n < range.size() ; n++) cout << range[n] << ' ';
    return 0;
}