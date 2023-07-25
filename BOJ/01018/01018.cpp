#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	char table[50][50];
	int row, column, black_error = 0, white_error = 0, ans = 64;
	cin >> row >> column;
	for (int n = 0; n < row; n++) {
		for (int m = 0; m < column; m++) {
			cin >> table[n][m];
		}
	}
	for (int i = 0; i <= row - 8; i++) {
		for (int j = 0; j <= column - 8; j++) {
			black_error = white_error = 0;
			for (int n = i; n < i + 8; n++) {
				for (int m = j; m < j + 8; m++) {
					if ((n + m) % 2 == 0 && table[n][m] != 'B')
						black_error++;
					if ((n + m) % 2 == 1 && table[n][m] != 'W')
						black_error++;
					if ((n + m) % 2 == 0 && table[n][m] != 'W')
						white_error++;
					if ((n + m) % 2 == 1 && table[n][m] != 'B')
						white_error++;
				}
			}
			ans = min(ans, min(white_error, black_error));
		}
	}
	cout << ans << endl;
	return 0;
}