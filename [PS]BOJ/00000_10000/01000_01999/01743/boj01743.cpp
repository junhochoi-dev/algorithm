#include <iostream>
using namespace std;
#define MAXSIZE 100
int ans = 0, result, row, column;
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
bool table[MAXSIZE][MAXSIZE] = { false, };
bool visited[MAXSIZE][MAXSIZE] = { false, };
void DFS(int x, int y) {
	visited[x][y] = true;
	result++;

	for (int n = 0; n < 4; n++) {
		int tx = x + dx[n];
		int ty = y + dy[n];
		if (tx < 0 || ty < 0 || tx >= row || ty >= column) continue;
		if (visited[tx][ty] == true || table[tx][ty] == false) continue;
		DFS(tx, ty);
	}
}
int main() {
	int cnt, x, y;
	cin >> row >> column >> cnt;
	for (int n = 0; n < cnt; n++) {
		cin >> x >> y;
		table[x-1][y-1] = true;
	}
	for (int n = 0; n < row; n++) {
		for (int m = 0; m < column; m++) {
			result = 0;
			if(visited[n][m] == false && table[n][m] == true) DFS(n, m);
			ans = result > ans ? result : ans;
		}
	}
	cout << ans << endl;
	return 0;
}