#include <iostream>
#include <queue>
#include <utility>
using namespace std;
#define MAXSIZE 300
int dx[] = { 1, 1, -1, -1, 2, 2, -2, -2 };
int dy[] = { 2, -2, 2, -2, 1, -1, 1, -1 };
int table[MAXSIZE][MAXSIZE] = { 0, };
bool visited[MAXSIZE][MAXSIZE] = { false, };
void BFS(int x1, int y1, int x2, int y2, int size) {
	// default
	for (int n = 0; n < size; n++) {
		for (int m = 0; m < size; m++) {
			visited[n][m] = false;
			table[n][m] = 0;
		}
	}
	// bfs
	queue<pair<int, int>> que;
	que.push(make_pair(x1, y1));
	visited[x1][y1] = true;
	while (!que.empty()) {
		if (table[x2][y2] != 0) break;
		int qx = que.front().first;
		int qy = que.front().second;
		for (int n = 0; n < 8; n++) {
			int tx = qx + dx[n];
			int ty = qy + dy[n];
			if (tx < 0 || ty < 0 || tx >= size || ty >= size) continue;
			if (visited[tx][ty]) continue;
			visited[tx][ty] = true;
			table[tx][ty] = table[qx][qy] + 1;
			que.push(make_pair(tx, ty));
		}
		que.pop();
	}
	cout << table[x2][y2] << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int test_case, x1, y1, x2, y2, size;
	cin >> test_case;
	for (int k = 0; k < test_case; k++) {
		cin >> size;
		cin >> x1 >> y1;
		cin >> x2 >> y2;
		BFS(x1, y1, x2, y2, size);
	}
	return 0;
}
