#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define endl '\n'
#define VMAXSIZE 10001
#define EMAXSIZE 100001

vector<pair<int, pair<int,int>>> vt;

int V, E, from;
int parent[VMAXSIZE];

// UnionFind Algorithm -> Disjoint-Set
int Find(int x){
	if(x == parent[x]) return x;
	else return Find(parent[x]);
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
	//freopen("input.txt", "r", stdin);
 	int to, cost, sum = 0;
	cin >> V >> E;
	for(int n = 0 ; n < E ; n++){
		cin >> from >> to >> cost;
		vt.push_back(make_pair(cost, make_pair(from, to)));
	}
	// sort vector
	sort(vt.begin(), vt.end());
	
	//	default parent for cycle check
	for(int n = 1; n <= V; n++) parent[n] = n;

	for(int n = 0; n < E; n++){
		int x = vt[n].second.first;
		int y = vt[n].second.second;
		int c = vt[n].first;
		
		// cycle check
		if(Find(x) == Find(y)) continue;

		// weight sum
		sum += c;
		// union
		Union(x, y);
	}
	cout << sum << endl;
    return 0;
}