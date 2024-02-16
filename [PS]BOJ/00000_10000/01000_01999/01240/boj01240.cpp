#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'
vector<pair<int, int>> node[1001];
int N, M;
bool visited[1001];
int dist[1001];
void initialize() {
	for (int n = 1; n <= N; n++) {
		visited[n] = false;
		dist[n] = 0;
	}
}
void BFS(int start, int end) {
	initialize();
	queue<int> que;
	que.push(start);
	visited[start] = true;
	while (!que.empty()) {
		int curr = que.front();
		int currW = dist[curr];
		que.pop();

		for (int n = 0; n < node[curr].size(); n++) {
			int next = node[curr][n].first;
			int nextW = node[curr][n].second;
			if (visited[next]) continue;
			dist[next] = currW + nextW;
			visited[next] = true;
			que.push(next);
		}
	}
	cout << dist[end] << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int from, to, weight;
	cin >> N >> M;
	for (int n = 0; n < N - 1; n++) {
		cin >> from >> to >> weight;
		node[from].push_back(make_pair(to, weight));
		node[to].push_back(make_pair(from, weight));
	}
	for (int n = 0; n < M; n++) {
		cin >> from >> to;
		BFS(from, to);
	}
	return 0;
}