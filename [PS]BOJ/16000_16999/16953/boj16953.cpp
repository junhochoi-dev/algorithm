#include <iostream>
#include <algorithm>
using namespace std;
#define INF 987654321
long long A, B;
long long ans = INF;
void DFS(long long idx, long long cnt) {
	if (idx > B) return;
	if (idx == B) ans = min(cnt, ans);
	DFS(idx * 2, cnt + 1);
	DFS(idx * 10 + 1, cnt + 1);
}
int main() {
	cin >> A >> B;
	DFS(A, 1);
	if (ans == INF) cout << -1 << endl;
	else cout << ans << endl;
	return 0;
}