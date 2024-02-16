#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

#define endl '\n'
#define ll long long
#define MAXSIZE 100001

int N, M;

int root[MAXSIZE];
ll dist[MAXSIZE];

void Initialize() {
    for (int n = 1; n <= N; n++) {
        root[n] = n;
        dist[n] = 0;
    }
}

// union find alg

int Find(int x) {
	// if it is equal to root, we don't need to find
    if (root[x] == x) return x;
    
    // to find standard root
	int parent = Find(root[x]);
	
	
    dist[x] += dist[root[x]];
    
    // change root to standard root
    return root[x] = parent;
}
void Union(int from, int to, int weight) {
    int root_from = Find(from);
    int root_to = Find(to);

    // if their root is same, we dont need to union
    if (root_from == root_to) return;

	dist[root_from] = dist[to] - dist[from] + weight;
	root[root_from] = root_to;
	return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    
    char op;
    int from, to;
	ll weight;
	
    while(true) {
        cin >> N >> M;
        if (N == 0 && M == 0) break;
        Initialize();
        for(int n = 0 ; n < M ; n++){
            cin >> op;
            if (op == '!') {
                cin >> from >> to >> weight;
                Union(from, to, weight);
            }
            else { // op == '?'
                cin >> from >> to;
                if (Find(from) != Find(to)) cout << "UNKNOWN" << endl;
                else {
                    cout << dist[from] - dist[to] << endl;
                }
            }
        }
    }
    return 0;
}