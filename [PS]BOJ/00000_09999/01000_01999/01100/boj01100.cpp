#include <iostream>
using namespace std;
int main() {
	char chess_table[8][8];
	int count = 0;
	for (int n = 0; n < 8; n++) {
		for (int m = 0; m < 8; m++) {
			cin >> chess_table[n][m];
		}
		cin.clear();
	}
	for (int n = 0; n < 8; n++) {
		for (int m = 0; m < 8; m++) {
			if ((m + n) % 2 == 0 && chess_table[n][m] == 'F')
				count++;
		}
	}
	cout << count << endl;
	return 0;
}