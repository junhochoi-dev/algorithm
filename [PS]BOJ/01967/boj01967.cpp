#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define endl '\n'
#define MAXSIZE 10001

vector<pair<int,int>> edge[MAXSIZE];
bool visited[MAXSIZE];
int dist[MAXSIZE];
int V, E;

void initialize(){
	for(int n = 1; n <= V; n++){
		visited[n] = false;
		dist[n] = 0;
	}
}

int BFS(int startVertex){
	int max_dist = 0;
	initialize();
	queue<int> que;
	que.push(startVertex);
	visited[startVertex] = true;
	while(!que.empty()){
		int cur_idx = que.front();
		int cur_cost = dist[cur_idx];
		que.pop();
		for(int n = 0; n < edge[cur_idx].size(); n++){
			int next_idx = edge[cur_idx][n].first;
			int next_cost = edge[cur_idx][n].second;
			if(visited[next_idx]) continue;
			visited[next_idx] = true;
			dist[next_idx] = next_cost + cur_cost;
			max_dist = max(max_dist, dist[next_idx]);
			que.push(next_idx);
		}
	}
	return max_dist;
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// freopen("input.txt", "r", stdin);

	int from, to, cost;
	cin >> V;
	E = V - 1;
	for(int n = 0; n < E; n++){
		cin >> from >> to >> cost;
		edge[from].push_back(make_pair(to, cost));
		edge[to].push_back(make_pair(from, cost));
	}

	int max_dist = 0;
	for(int n = 1; n <= V; n++){
		max_dist = max(max_dist, BFS(n));
	}

	cout << max_dist << endl;

    return 0;
}