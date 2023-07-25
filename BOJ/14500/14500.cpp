#include <iostream>
using namespace std;
int main() {
	int t[500][500], max = 0, N, M;
	cin >> N >> M;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cin >> t[n][m];
		}
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M - 3; m++) {
			if (t[n][m] + t[n][m + 1] + t[n][m + 2] + t[n][m + 3] > max)
				max = t[n][m] + t[n][m + 1] + t[n][m + 2] + t[n][m + 3];
		}
	}
	for (int n = 0; n < N - 3; n++) {
		for (int m = 0; m < M; m++) {
			if (t[n][m] + t[n + 1][m] + t[n + 2][m] + t[n + 3][m] > max)
				max = t[n][m] + t[n + 1][m] + t[n + 2][m] + t[n + 3][m];
		}
	}
	for (int n = 0; n < N - 1; n++) {
		for (int m = 0; m < M - 1; m++) {
			if(t[n][m] + t[n + 1][m] + t[n][m + 1] + t[n + 1][m + 1] > max)
				max = t[n][m] + t[n + 1][m] + t[n][m + 1] + t[n + 1][m + 1];
		}
	}
	for (int n = 0; n < N - 1; n++) {
		for (int m = 0; m < M - 2; m++) {
			if (t[n][m] + t[n][m + 1] + t[n][m + 2] + t[n + 1][m + 1] > max)
				max = t[n][m] + t[n][m + 1] + t[n][m + 2] + t[n + 1][m + 1];
			if (t[n + 1][m] + t[n + 1][m + 1] + t[n + 1][m + 2] + t[n][m + 1] > max)
				max = t[n + 1][m] + t[n + 1][m + 1] + t[n + 1][m + 2] + t[n][m + 1];
			if (t[n + 1][m] + t[n + 1][m + 1] + t[n][m + 1] + t[n][m + 2] > max)
				max = t[n + 1][m] + t[n + 1][m + 1] + t[n][m + 1] + t[n][m + 2];
			if (t[n][m] + t[n][m + 1] + t[n + 1][m + 1] + t[n + 1][m + 2] > max)
				max = t[n][m] + t[n][m + 1] + t[n + 1][m + 1] + t[n + 1][m + 2];
			if (t[n][m] + t[n][m + 1] + t[n][m + 2] + t[n + 1][m] > max)
				max = t[n][m] + t[n][m + 1] + t[n][m + 2] + t[n + 1][m];
			if (t[n + 1][m] + t[n + 1][m + 1] + t[n + 1][m + 2] + t[n][m + 2] > max)
				max = t[n + 1][m] + t[n + 1][m + 1] + t[n + 1][m + 2] + t[n][m + 2];
			if (t[n][m] + t[n][m + 1] + t[n][m + 2] + t[n + 1][m + 2] > max)
				max = t[n][m] + t[n][m + 1] + t[n][m + 2] + t[n + 1][m + 2];
			if (t[n][m] + t[n + 1][m] + t[n + 1][m + 1] + t[n + 1][m + 2] > max)
				max = t[n][m] + t[n + 1][m] + t[n + 1][m + 1] + t[n + 1][m + 2];
		}
	}
	for (int n = 0; n < N - 2; n++) {
		for (int m = 0; m < M - 1; m++) {
			if (t[n][m] + t[n + 1][m] + t[n + 2][m] + t[n + 1][m + 1] > max)
				max = t[n][m] + t[n + 1][m] + t[n + 2][m] + t[n + 1][m + 1];
			if (t[n][m + 1] + t[n + 1][m + 1] + t[n + 2][m + 1] + t[n + 1][m] > max)
				max = t[n][m + 1] + t[n + 1][m + 1] + t[n + 2][m + 1] + t[n + 1][m];
			if (t[n][m] + t[n + 1][m] + t[n + 1][m + 1] + t[n + 2][m + 1] > max)
				max = t[n][m] + t[n + 1][m] + t[n + 1][m + 1] + t[n + 2][m + 1];
			if (t[n][m + 1] + t[n + 1][m + 1] + t[n + 1][m] + t[n + 2][m] > max)
				max = t[n][m + 1] + t[n + 1][m + 1] + t[n + 1][m] + t[n + 2][m];
			if (t[n][m] + t[n + 1][m] + t[n + 2][m] + t[n][m + 1] > max)
				max = t[n][m] + t[n + 1][m] + t[n + 2][m] + t[n][m + 1];
			if (t[n][m] + t[n + 1][m] + t[n + 2][m] + t[n + 2][m + 1] > max)
				max = t[n][m] + t[n + 1][m] + t[n + 2][m] + t[n + 2][m + 1];
			if (t[n][m] + t[n][m + 1] + t[n + 1][m + 1] + t[n + 2][m + 1] > max)
				max = t[n][m] + t[n][m + 1] + t[n + 1][m + 1] + t[n + 2][m + 1];
			if (t[n + 2][m] + t[n + 2][m + 1] + t[n + 1][m + 1] + t[n][m + 1] > max)
				max = t[n + 2][m] + t[n + 2][m + 1] + t[n + 1][m + 1] + t[n][m + 1];
		}
	}
	cout << max << endl;
	return 0;
}