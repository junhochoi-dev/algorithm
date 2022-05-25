#include <iostream>
#define endl '\n'
int table[500][500] = {0, };
int dp[500][500] = {0, };
bool visited[500][500];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int N, M;
using namespace std;
int DFS(int row, int column){
    if(row == N - 1 && column == M - 1) return 1;
    if(visited[row][column]) return dp[row][column];
    visited[row][column] = true;
    for(int k = 0 ; k < 4 ; k++){
        int x = row + dx[k];
        int y = column + dy[k];
        if(x >= 0 && y >= 0 && x < N && y < M) if(table[x][y] < table[row][column]) dp[row][column] += DFS(x, y);
    }
    return dp[row][column];
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    for(int n = 0 ; n < N ; n++) for(int m = 0 ; m < M ; m++) cin >> table[n][m];
    cout << DFS(0, 0);
	return 0;
}