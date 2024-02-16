#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
#define endl '\n'

#define pii pair<int, int>
#define vppp vector<pair<pii, pii>>

int root[3000];
int rootCheck[3000];
vppp vt;

int find_root(int x){
	if(root[x] == x) return x;
	return root[x] = find_root(root[x]);
}

void union_root(int x, int y){
	x = find_root(x);
	y = find_root(y);
	if(x != y) root[x] = y;
}

void init(int l){
	for(int n = 0 ; n < l ; n++){
		root[n] = n;
		rootCheck[n] = 0;
	}
}

int ccw(pii a, pii b, pii c){
	int tmp = (b.first - a.first) * (c.second - a.second) - (c.first - a.first) * (b.second - a.second);
	if(tmp > 0) return 1;
	else if(tmp < 0) return -1;
	else return 0;
}

bool isMeet(int a, int b){
	int ccw1 = ccw(vt[a].first, vt[a].second, vt[b].first) * ccw(vt[a].first, vt[a].second, vt[b].second);
	int ccw2 = ccw(vt[b].first, vt[b].second, vt[a].first) * ccw(vt[b].first, vt[b].second, vt[a].second);
	if(ccw1 <= 0 && ccw2 <= 0){
		if(ccw1 == 0 && ccw2 == 0){
			if(vt[a].first > vt[a].second) swap(vt[a].first, vt[a].second);
			if(vt[b].first > vt[b].second) swap(vt[b].first, vt[b].second);
			return vt[a].first <= vt[b].second && vt[b].first <= vt[a].second;
		}
		return true;
	}
	return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int sz;
    int x1, x2, y1, y2;
    cin >> sz;
    init(sz);
    for(int n = 0 ; n < sz ; n++){
    	cin >> x1 >> y1 >> x2 >> y2;
    	vt.push_back({{x1, y1},{x2, y2}});
	}
	for(int n = 0 ; n < sz ; n++){
		for(int m = n + 1 ; m < sz ; m++){
			if(isMeet(n, m)){
				if(find_root(n) != find_root(m)) union_root(n, m);
			}
		}
	}
	for(int n = 0 ; n < sz ; n++) rootCheck[find_root(root[n])]++;
	int maxRoot = 0, cntRoot = 0;
	for(int n = 0 ; n < sz ; n++){
		maxRoot = max(maxRoot, rootCheck[n]);
		if(rootCheck[n] != 0) cntRoot++;
	}
	cout << cntRoot << endl << maxRoot << endl;
    return 0;
}

