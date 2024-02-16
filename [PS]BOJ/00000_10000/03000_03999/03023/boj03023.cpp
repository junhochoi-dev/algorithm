#include <iostream>
using namespace std;
int main() {
	char arr[100][100], ch;
	int R, C, A, B;
	cin >> R >> C;
	cin.ignore();
	for (int n = 0; n < R; n++) {
		for (int m = 0; m < C; m++) {
			cin >> ch;
			arr[n][m] = ch;
			arr[2 * R - n - 1][m] = ch;
			arr[n][2 * C - m - 1] = ch;
			arr[2 * R - n - 1][2 * C - m - 1] = ch;
		}
		cin.ignore();
	}
	cin >> A >> B;
	if (arr[A - 1][B - 1] == '#')
		arr[A - 1][B - 1] = '.';
	else if (arr[A - 1][B - 1] == '.')
		arr[A - 1][B - 1] = '#';

	for (int n = 0; n < R * 2; n++) {
		for (int m = 0; m < C * 2; m++) {
			cout << arr[n][m];
		}
		cout << endl;
	}

	return 0;
}