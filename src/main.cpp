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
	priority_queue<pair<int,int>> pq;
	dis[sp] = 0;
	pq.push(make_pair(dis[sp], sp));
	while(!pq.empty()){
		int idx = pq.top().second;
		int cur_weight = pq.top().first;
		pq.pop();
		for(int n = 0; n < vt[idx].size(); n++){
			int weight_next = vt[idx][n].first + cur_weight;
			int weight_curr = dis[vt[idx][n].second];
			if(weight_next > weight_curr) continue;
			dis[vt[idx][n].second] = min(weight_next, weight_curr);
			pq.push(make_pair(dis[vt[idx][n].second], vt[idx][n].second));
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int V, E, start, end, weight;
	freopen("input.txt", "r", stdin); 
	cin >> V >> E >> sp;
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