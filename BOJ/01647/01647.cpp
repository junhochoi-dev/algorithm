#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define endl '\n'
#define MAXSIZE 100001

vector<pair<int, pair<int,int>>> Edge;
vector<int> cost_sum;
int V, E;
int parent[MAXSIZE];

// UnionFind Algorithm -> Disjoint-Set
int Find(int x){
	if(x == parent[x]) return x;
	else return parent[x] = Find(parent[x]);
	// else return Find(parent[x]);
}
void Union(int x, int y){
	x = Find(x);
	y = Find(y);
	if(x != y) parent[y] = x;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// freopen("input.txt", "r", stdin);
 	int to, from, cost, sum = 0;
	cin >> V >> E;
	for(int n = 0 ; n < E ; n++){
		cin >> from >> to >> cost;
		Edge.push_back(make_pair(cost, make_pair(from, to)));
	}
	// sort vector
	sort(Edge.begin(), Edge.end());
	
	//	default parent for cycle check
	for(int n = 1; n <= V; n++) parent[n] = n;

	for(int n = 0; n < E; n++){
		// cycle check
		if(Find(Edge[n].second.first) == Find(Edge[n].second.second)) continue;

		cost_sum.push_back(Edge[n].first);
		// union
		Union(Edge[n].second.first, Edge[n].second.second);
	}
	for(int n = 0; n < cost_sum.size() - 1; n++){
		sum += cost_sum[n];
	}
	cout << sum << endl;
    return 0;
}