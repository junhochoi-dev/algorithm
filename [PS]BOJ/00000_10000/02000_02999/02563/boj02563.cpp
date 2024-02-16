#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int test_case, x, y, sum = 0;
	char table[100][100];
	for (int n = 0; n < 100; n++) {
		memset(&table[n][0], 'X', 100);
	}
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> x >> y;
		for (int m = y - 1; m < (y + 10) - 1; m++) {
			for (int i = x - 1; i < (x + 10) - 1; i++) {
				table[m][i] = 'O';
			}
		}
	}
	for (int n = 0; n < 100; n++) {
		for (int m = 0; m < 100; m++) {
			if (table[n][m] == 'O')
				sum++;
		}
	}
	cout << sum << endl;

	return 0;
}