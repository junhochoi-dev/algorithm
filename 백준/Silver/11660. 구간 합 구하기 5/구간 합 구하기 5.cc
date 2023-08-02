#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define endl '\n'
#define MAXSIZE 1024 + 1
int arr[MAXSIZE][MAXSIZE];
int sum[MAXSIZE][MAXSIZE];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M, x1, x2, y1, y2;
	cin >> N >> M;
	for (int n = 1; n <= N; n++) {
		for (int m = 1; m <= N; m++) {
			cin >> arr[n][m];
			if (m == 0) sum[n][m] = arr[n][m];
			else sum[n][m] = sum[n][m - 1] + arr[n][m];
		}
	}
	for (int k = 0; k < M; k++) {
		cin >> x1 >> y1 >> x2 >> y2;
		int ans = 0;
		for (int n = x1; n <= x2; n++) {
			if (y1 == 1) ans += sum[n][y2];
			else ans += sum[n][y2] - sum[n][y1 - 1];
		}
		cout << ans << endl;
	}

	return 0;
}