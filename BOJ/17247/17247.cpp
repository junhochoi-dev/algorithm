#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int arr[1000][1000], N, M;
	int	s1, s2, d1, d2;
	cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cin >> arr[n][m];
		}
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			if (arr[n][m] == 1) {
				s1 = n;
				s2 = m;
				arr[n][m] = 0;
				goto space1;
			}
		}
	}
	space1:
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			if (arr[n][m] == 1) {
				d1 = n;
				d2 = m;
				goto space2;
			}
		}
	}
	space2:
	cout << abs(s1 - d1) + abs(s2 - d2) << endl;
	return 0;
}