#include <iostream>
#include <string>
#include <cmath>
#define SIZE  10
using namespace std;
int main() {
	char table[10][10];
	int x, y, move = 10000;
	cin >> x >> y;
	for (int n = 0; n < SIZE; n++) {
		for (int m = 0; m < SIZE; m++) {
			cin >> table[n][m];;
		}
		cin.ignore();
	}
	for (int n = 0; n < SIZE; n++) {
		for (int m = 0; m < SIZE; m++) {
			if (table[n][m] == 'o')
				for (int i = 0; i < SIZE; i++) {
					if(i != n && table[i][m] == 'x')
						table[i][m] = '@';
					if(i != m && table[n][i] == 'x')
						table[n][i] = '@';
				}
		}
	}
	for (int n = 0; n < SIZE; n++) {
		for (int m = 0; m < SIZE; m++) {
			if (table[n][m] == 'x')
				if (move > abs(x - 1 - n) + abs(y - 1 - m))
					move = abs(x - 1 - n) + abs(y - 1 - m);
		}
	}
	cout << move << endl;
	return 0;
}