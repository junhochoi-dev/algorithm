#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
#define endl '\n'
#define INF 987654321
int dis[1001], sp, ep;
vector<pair<int, int>> vt[1001];
void dijkstra() {
	priority_queue<pair<int, int>> pq;

	// initialize start point distance
	dis[sp] = 0;
	pq.push(make_pair(-dis[sp], sp));

	while (!pq.empty()) {
		int cur_idx = pq.top().second;
		int cur_weight = -pq.top().first;
		pq.pop();

		if (dis[cur_idx] < cur_weight) continue;

		for (int n = 0; n < vt[cur_idx].size(); n++) {
			int next_idx = vt[cur_idx][n].second;
			int next_weight = vt[cur_idx][n].first;

			// not min
			if (dis[next_idx] <= cur_weight + next_weight) continue;

			dis[next_idx] = cur_weight + next_weight;
			pq.push(make_pair(-dis[next_idx], next_idx));
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// freopen("input.txt", "r", stdin);

	int V, E, start, end, weight;

	cin >> V;
	cin >> E;

	// default
	for (int n = 1; n <= V; n++) dis[n] = INF;

	for (int n = 0; n < E; n++) {
		cin >> start >> end >> weight;
		vt[start].push_back(make_pair(weight, end));
	}

	cin >> sp >> ep;
	dijkstra();
	cout << dis[ep] << endl;
	return 0;
}