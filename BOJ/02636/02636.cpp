#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
#define endl '\n'
#define MAXSIZE 100
int N, M;
int dx[] = { 1, -1, 0, 0 };
int dy[] = { 0, 0, 1, -1 };
int table[MAXSIZE][MAXSIZE];
int outsideAir[MAXSIZE][MAXSIZE];
int target[MAXSIZE][MAXSIZE];
void BFS(int y, int x) {
	// start
	queue<pair<int, int>> que;
	que.push(make_pair(y, x));
	// visited
	outsideAir[y][x] = 2;

	while (!que.empty()) {
		// pop queue
		int qx = que.front().second;
		int qy = que.front().first;
		que.pop();

		// 4 direction
		for (int k = 0; k < 4; k++) {
			int tx = qx + dx[k];
			int ty = qy + dy[k];
			if (tx < 0 || ty < 0 || tx >= M || ty >= N || outsideAir[ty][tx] != 0) continue;
			outsideAir[ty][tx] = 2;
			que.push(make_pair(ty, tx));
		}
	}
}

void checkAir() {
	// copy original
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			outsideAir[n][m] = table[n][m];
		}
	}
	// find outside air using bfs
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			// only use around table
			if (n == 0 || m == 0 || n == N - 1 || m == M - 1) {
				// outside condition and no visited
				if(table[n][m] == 0 && outsideAir[n][m] != 2) BFS(n, m);
			}
		}
	}
}

void deleteCheeze() {
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			if (target[n][m] == 1) table[n][m] = 0;
		}
	}
}

void checkCheeze() {
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			int cnt = 0;
			for (int k = 0; k < 4; k++) {
				int x = m + dx[k];
				int y = n + dy[k];
				if (x < 0 || y < 0 || x >= M || y >= N) continue;
				if (outsideAir[y][x] == 2) cnt++;
			}
			if (cnt >= 1) target[n][m] = 1;
			else target[n][m] = 0;
		}
	}
}

bool noCheeze() {
	int sum = 0;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			sum += table[n][m];
		}
	}
	if (sum == 0) return true;
	else return false;
}

int howmanyCheeze(){
	int cnt = 0;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			if(table[n][m] == 1) cnt++;
		}
	}
	return cnt;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// freopen("input.txt", "r", stdin);
	int cnt = 0;
	cin >> N >> M;

	// input
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cin >> table[n][m];
		}
	}

	int cnt_cheeze;
	// until no cheeze...
	while (!noCheeze()) {
		// spend time
		cnt++;

		// check outside Air
		checkAir();

		cnt_cheeze = howmanyCheeze();

		checkCheeze();
		deleteCheeze();
	}
	cout << cnt << endl << cnt_cheeze << endl;
	return 0;
}