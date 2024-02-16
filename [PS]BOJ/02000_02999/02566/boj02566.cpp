#include <iostream>
using namespace std;
int main() {
	int table[9][9], max = 0, row, column;
	for (int n = 0; n < 9; n++) {
		for (int m = 0; m < 9; m++) {
			cin >> table[n][m];
			if (max <= table[n][m]) {
				max = table[n][m];
				row = n;
				column = m;
			}
		}
	}
	
	cout << max << endl;
	cout << row + 1 << ' ' << column + 1 << endl;
	return 0;
}