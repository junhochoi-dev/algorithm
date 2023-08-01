#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
#define endl '\n'
#define INF 987654321
int dis[20001], sp;
vector<pair<int, int>> vt[20001];
void dijkstra(){
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
	dis[sp] = 0;
	pq.push(make_pair(dis[sp], sp));
	while(!pq.empty()){
		int cur_idx = pq.top().second;
		int cur_weight = pq.top().first;
		pq.pop();
		for(int n = 0; n < vt[cur_idx].size(); n++){
			int next_idx = vt[cur_idx][n].second;
			int next_weight = vt[cur_idx][n].first;
			// not min
			if(dis[next_idx] < cur_weight + next_weight) continue;
			dis[next_idx] = cur_weight + next_weight;
			pq.push(make_pair(dis[next_idx],next_idx));
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//freopen("input.txt", "r", stdin);

	int V, E, start, end, weight;

	cin >> V >> E >> sp;

	// default
	for(int n = 1 ; n <= V ; n++) dis[n] = INF;
	for(int n = 0 ; n < E ; n++){
		cin >> start >> end >> weight;
		vt[start].push_back(make_pair(weight, end));
	}
	dijkstra();
	for(int n = 1; n <= V; n++){
		if(dis[n] == INF) cout << "INF" << endl;
		else cout << dis[n] << endl;
	}
    return 0;
}