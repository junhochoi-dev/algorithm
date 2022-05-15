#include <iostream>
#include <cmath>
#include <queue>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int A, B;
	bool visited[100001] = { false, };
	int path[100001] = { 0, };
	cin >> A >> B;
	queue<int> que;
	que.push(A);
	visited[A] = true;
	while (!que.empty()) {
		int idx = que.front();
		if (idx == B) break;
		if (idx * 2 <= 100000 && !visited[idx * 2]) {
			visited[idx * 2] = true;
			que.push(idx * 2);
			path[idx * 2] = path[idx] + 1;
		}
		if (idx + 1 <= 100000 && !visited[idx + 1]) {
			visited[idx + 1] = true;
			que.push(idx + 1);
			path[idx + 1] = path[idx] + 1;
		}
		if (idx - 1 >= 0 && !visited[idx - 1]) {
			visited[idx - 1] = true;
			que.push(idx - 1);
			path[idx - 1] = path[idx] + 1;
		}
		que.pop();
	}
	cout << path[B] << endl;
	return 0;
}