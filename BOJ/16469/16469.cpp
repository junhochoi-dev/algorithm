#include <iostream>
#include <utility>
#include <queue>
#include <cmath>
using namespace std;
#define MAXSIZE 100
int R, C;
int dx[] = { 1, -1, 0, 0 };
int dy[] = { 0, 0, 1, -1 };
bool table[MAXSIZE][MAXSIZE] = { false, }; // true = wall , false = none
int visited[3][MAXSIZE][MAXSIZE] = { 0, };
int time[MAXSIZE][MAXSIZE] = { 0, };
void BFS(int x, int y, int v) {
	queue<pair<int,int>> que;
	que.push(make_pair(x, y));
	while (!que.empty()) {
		for (int n = 0; n < 4; n++) {
			int tx = que.front().first + dx[n];
			int ty = que.front().second + dy[n];
			if (tx == x && ty == y) continue;
			if (tx < 0 || ty < 0 || tx >= R || ty >= C) continue;
			if (visited[v][tx][ty] != 0 || table[tx][ty]) continue;
			visited[v][tx][ty] = visited[v][que.front().first][que.front().second] + 1;
			que.push(make_pair(tx, ty));
		}
		que.pop();
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	char wall;
	bool check = true; // can they meet?
	int vx[3], vy[3];
	cin >> R >> C;
	for (int n = 0; n < R; n++) {
		for (int m = 0; m < C; m++) {
			cin >> wall;
			if (wall == '1') table[n][m] = true;
		}
	}
	for (int n = 0; n < 3; n++) {
		cin >> vx[n] >> vy[n];
		vx[n]--;
		vy[n]--;
	}
	for (int n = 0; n < 3; n++) {
		BFS(vx[n], vy[n], n);
		for (int m = 0; m < 3; m++) {
			if (m != n && visited[n][vx[m]][vy[m]] == 0) check = false;
		}
	}
	if (!check) cout << -1 << endl;
	else {
		int leastTime = 99999;
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				time[i][j] = max(max(visited[0][i][j], visited[1][i][j]), visited[2][i][j]);
				if (leastTime > time[i][j] && time[i][j] != 0) leastTime = time[i][j];
			}
		}
		cout << leastTime << endl;
		int cnt = 0;
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				if (time[i][j] == leastTime) cnt++;
			}
		}
		cout << cnt << endl;
	}
	
	return 0;
}