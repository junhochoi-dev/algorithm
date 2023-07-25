#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define endl '\n'
#define INF 987654321
#define MAXSIZE 101
int dis[MAXSIZE][MAXSIZE];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int vertex, edge, from, to, cost;
	cin >> vertex >> edge;
	for (int n = 1; n <= vertex; n++) {
		for (int m = 1; m <= vertex; m++) {
			dis[n][m] = INF;
		}
	}

	for (int n = 0; n < edge; n++) {
		cin >> from >> to >> cost;
		dis[from][to] = min(dis[from][to], cost);
	}

	for (int k = 1; k <= vertex; k++) {
		for (int n = 1; n <= vertex; n++) {
			for (int m = 1; m <= vertex; m++) {
				dis[n][m] = min(dis[n][m], dis[n][k] + dis[k][m]);
			}
		}
	}

	for (int n = 1; n <= vertex; n++) {
		for (int m = 1; m <= vertex; m++) {
			if(dis[n][m] == INF || n == m) cout << 0 << ' ';
			else cout << dis[n][m] << ' ';
		}
		cout << endl;
	}
	return 0;
}