#include <iostream>
#include <algorithm>
using namespace std;
#define MAXSIZE 201
#define endl '\n'
int SZ, travel, connect;
int root[MAXSIZE];
int Find(int x) {
	if (root[x] == x) return x;
	return root[x] = Find(root[x]);
}

void Union(int x, int y) {
	x = Find(x);
	y = Find(y);
	root[y] = x;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> SZ >> travel;
	for(int n = 1; n <= SZ ; n++) root[n] = n;
	for(int n = 1 ; n <= SZ ; n++){
	    for(int m = 1 ; m <= SZ ; m++){
	        cin >> connect;
	        if(n == m) continue;
	        if(connect == 1 && Find(n) != Find(m)) Union(n, m);
	    }
	}
	int curr, next;
	bool able = true;
	cin >> curr;
	for(int n = 2 ; n <= travel ; n++){
	    cin >> next;
	    if(Find(curr) != Find(next)){
	        able = false;
	        break;
	    }
	    curr = next;
	}
	if(able) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}