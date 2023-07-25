#include <iostream>
#include <algorithm>
using namespace std;
#define MAXSIZE 1000001
#define endl '\n'
int SZ, order, input, A, B;
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
	//freopen("input.txt", "r", stdin);
	cin >> SZ >> order;
	for(int n = 0; n <= SZ; n++) root[n] = n;
	for(int n = 0; n < order; n++){
	    cin >> input >> A >> B;
	    if(input == 0) Union(A, B);
	    else{
	        if(Find(A) == Find(B)) cout << "YES" << endl;
	        else cout << "NO" << endl;
	    }
	}
	return 0;
}