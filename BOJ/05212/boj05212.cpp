#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int N, M, cnt;
	char map[10][10];
	cin >> N >> M;
	int n_LU = N, m_LU = M;
	int n_RD = 0, m_RD = 0;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cin >> map[n][m];
		}
		cin.ignore();
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cnt = 0;
			if (map[n][m] == 'X') {
				if (n - 1 < 0 || (n - 1 >= 0 && map[n - 1][m] == '.'))
					cnt++;
				if (n + 1 > N - 1 || (n + 1 <= N - 1 && map[n + 1][m] == '.'))
					cnt++;
				if (m - 1 < 0 ||(m - 1 >= 0 && map[n][m - 1] == '.'))
					cnt++;
				if (m + 1 > M - 1 ||(m + 1 <= M - 1 && map[n][m + 1] == '.'))
					cnt++;
				if (cnt >= 3)
					map[n][m] = 'O';
			}
		}
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			if (map[n][m] == 'O')
				map[n][m] = '.';
			if (map[n][m] == 'X') {
				n_LU = min(n_LU, n);
				m_LU = min(m_LU, m);
				n_RD = max(n_RD, n);
				m_RD = max(m_RD, m);
			}
		}
	}
	for (int n = n_LU; n <= n_RD; n++) {
		for (int m = m_LU; m <= m_RD; m++) {
			cout << map[n][m];
		}
		cout << endl;
	}
	
	return 0;
}