#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	char arr[10][10];
	int column, row;
	cin >> column >> row;
	for (int n = 0; n < column; n++) {
		for (int m = 0; m < row; m++) {
			cin >> arr[n][m];
		}
		cin.ignore();
	}
	for (int n = 0; n < column; n++) {
		for (int m = row - 1; m >= 0; m--) {
			cout << arr[n][m];
		}
		cout << endl;
	}
	return 0;
}