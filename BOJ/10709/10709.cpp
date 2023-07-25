#include <iostream>
using namespace std;
int main() {
	char table[100][100];
	int district[100][100];
	bool check;
	int H, W, index;
	cin >> H >> W;
	for (int n = 0; n < H; n++) {
		for (int m = 0; m < W; m++) {
			cin >> table[n][m];
		}
		cin.ignore();
	}
	for (int n = 0; n < H; n++) {
		check = true;
		index = -1;
		for (int m = 0; m < W; m++) {
			if (check)
				district[n][m] = index;
			if (table[n][m] == 'c') {
				check = false;
				district[n][m] = index = 0;
			}
			else if (!check)
				district[n][m] = ++index;
		}
	}
	for (int n = 0; n < H; n++) {
		for (int m = 0; m < W; m++) {
			cout << district[n][m] << ' ';
		}
		cout << endl;
	}
	return 0;
}