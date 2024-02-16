#include <iostream>
#include <algorithm>
using namespace std;
#define MAXSIZE 100001
#define endl '\n'
int SZ, synapse, A, B;
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
	int cut = 0;
	cin >> SZ >> synapse;
	for(int n = 1 ; n <= SZ ; n++) root[n] = n;
	for(int n = 0 ; n < synapse ; n++){
	    cin >> A >> B;
	    if(Find(A) == Find(B)) cut++;
	    else Union(A, B);
	}
	int group = 0;
	for(int n = 1 ; n <= SZ ; n++){
	    if(root[n] == n) group++;
	}
	cout << cut + group - 1 << endl;
	
	return 0;
}