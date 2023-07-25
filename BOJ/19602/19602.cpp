#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
#define endl '\n'

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// freopen("input.txt", "r", stdin);
	int S, M, L;
	cin >> S >> M >> L;
	if(S + 2 * M + 3 * L >= 10) cout << "happy" << endl;
	else cout << "sad" << endl;
	return 0;
}