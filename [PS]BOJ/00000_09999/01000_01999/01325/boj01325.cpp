#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define MAXSIZE 10000
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int com, connect, start, end;
	cin >> com >> connect;
	vector<int> node[MAXSIZE];
	for (int n = 0; n < connect; n++) {
		cin >> start >> end;
		node[end - 1].push_back(start - 1);
	}

	// BFS
	queue<int> que;
	bool visited[MAXSIZE] = { false, };
	int result[MAXSIZE] = { 0, };
	int ans = 0;
	for (int n = 0; n < com; n++) {
		for (int m = 0; m < com; m++) visited[m] = false;
		result[n] = 1;
		que.push(n);
		visited[n] = true;
		while (!que.empty()) {
			int idx = que.front();
			for (int m = 0; m < node[idx].size(); m++) {
				if (visited[node[idx][m]]) continue;
				visited[node[idx][m]] = true;
				que.push(node[idx][m]);
				result[n]++;
			}
			que.pop();
		}
		ans = result[n] > ans ? result[n] : ans;
	}
	for (int n = 0; n < com; n++) {
		if (ans == result[n])
			cout << n + 1 << ' ';
	}

	return 0;
}
