#include <iostream>
#include <algorithm>
#include <cmath>
#include <queue>
#include <tuple>
#include <vector>
#include <utility>
using namespace std;
#define MAXSIZE 100
#define pdd pair<double, double>
#define vpdd vector<pdd>
#define pqtdii priority_queue<tuple<double, int, int>>
int SZ; int root[MAXSIZE];
vpdd vt; pqtdii pq;

double line(pdd a, pdd b) {
	double x = pow(a.first - b.first, 2);
	double y = pow(a.second - b.second, 2);
	return sqrt(x + y);
}

int Find(int x) {
	if (root[x] == x) return x;
	return Find(root[x]);
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
	//freopen("input.txt", "r", stdin);
	double x, y;
	cin >> SZ;
	for (int n = 0; n < SZ; n++) {
		cin >> x >> y;
		vt.push_back(make_pair(x, y));
	}
	for (int n = 0; n < SZ; n++) {
		for (int m = n + 1; m < SZ; m++) {
			pq.push(make_tuple(-line(vt[n], vt[m]), n, m));
		}
	}
	for (int n = 0; n < SZ; n++) root[n] = n;
	int starCnt = 0;
	double sumCost = 0;
	while (true) {
		if (starCnt == SZ - 1) break;
		double cost = -get<0>(pq.top());
		int A = get<1>(pq.top());
		int B = get<2>(pq.top());
		pq.pop();
		if (Find(A) == Find(B)) continue;
		starCnt++;
		sumCost += cost;
		Union(A, B);
	}
	cout << sumCost << endl;
	return 0;
}