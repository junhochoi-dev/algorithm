#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;
#define endl '\n'

int root[500 + 1];
bool tree[500 + 1];
int find_root(int x){
	if(x == root[x]) return x;
	// return find_root(root[x]);	
	return root[x] = find_root(root[x]);
}

void union_root(int x, int y){
	x = find_root(x);
	y = find_root(y);
	if(x != y) root[x] = y;
}

void init(int v){
	for(int n = 1 ; n <= v ; n++){
		root[n] = n;
		tree[n] = true;
	}
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int vertex, edge, from, to, tc = 0;
    while(true){
    	cin >> vertex >> edge;
    	if(vertex == 0 && edge == 0) break;
    	init(vertex);
    	for(int n = 0 ; n < edge ; n++){
    		cin >> from >> to;
    		if(find_root(from) == find_root(to)){
    			tree[find_root(from)] = false;
			}
			else{
				if(tree[find_root(from)] && tree[find_root(to)]){
					tree[find_root(from)] = false;
				}
				else{
					tree[find_root(to)] = false;
					tree[find_root(from)] = false;
				}
				union_root(from, to);
			}
		}
		
		int cnt = 0;
		for(int n = 1 ; n <= vertex ; n++) if(tree[n]) cnt++;
		
		cout << "Case " << ++tc << ": ";
		if(cnt == 0) cout << "No trees." << endl;
		else if(cnt == 1) cout << "There is one tree." << endl;
		else cout << "A forest of " << cnt << " trees." << endl;
	}
    return 0;
}