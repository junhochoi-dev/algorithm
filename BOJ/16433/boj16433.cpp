#include <iostream>
using namespace std;
int main() {
	char table[100][100];
	int N, x, y;
	cin >> N >> x >> y;
	if ((x + y) % 2 == 0) {
		for (int n = 0; n < N; n++) {
			for (int m = 0; m < N; m++) {
				if ((n + m) % 2 == 0)
					table[n][m] = 'v';
				else
					table[n][m] = '.';
			}
		}
	}
	else {
		for (int n = 0; n < N; n++) {
			for (int m = 0; m < N; m++) {
				if ((n + m) % 2 == 0)
					table[n][m] = '.';
				else
					table[n][m] = 'v';
			}
		}
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < N; m++) {
			cout << table[n][m];
		}
		cout << endl;
	}
	return 0;
}