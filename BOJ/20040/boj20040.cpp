#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;
#define endl '\n'

int root[500000];

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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int vertex, edge, from, to, cnt = 0;
    cin >> vertex >> edge;
    for(int n = 0 ; n < vertex ; n++) root[n] = n;
    for(int n = 0 ; n < edge ; n++){
    	cin >> from >> to;
    	if(find_root(from) == find_root(to)){
    		cnt = n + 1;
    		break;
		}
		else union_root(from, to);
	}
	if(cnt == 0) cout << 0 << endl;
	else cout << cnt << endl;
    return 0;
}