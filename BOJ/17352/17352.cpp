#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int root[300001];
int N, from, to;
void initRoot(int x){
	for(int n = 1 ; n <= x ; n++) root[n] = n;
}
int findRoot(int x){
	if(root[x] == x) return x;
	return root[x] = findRoot(root[x]); // optimization UnionFind
}
void unionRoot(int x, int y){
	if(x > y) swap(x, y); // set root as small order
	int rx = findRoot(x);
	int ry = findRoot(y);
	root[ry] = rx;
}
int main() {
    fastio;
    cin >> N;
    initRoot(N);
    for(int n = 0 ; n < N - 2 ; n++){
    	cin >> from >> to;
    	unionRoot(from, to);
	}
	int tmp = findRoot(1);
	for(int n = 2 ; n <= N ; n++){
		if(tmp != findRoot(n)){ // renew root
			cout << tmp << ' ' << root[n] << endl;
			break;
		}
	}
	
    return 0;
}