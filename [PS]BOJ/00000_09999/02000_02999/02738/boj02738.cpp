#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int row, column, temp;
	int arr[100][100];
	cin >> row >> column;
	for (int n = 0; n < row; n++)
		for (int m = 0; m < column; m++)
			cin >> arr[n][m];
	for (int n = 0; n < row; n++)
		for (int m = 0; m < column; m++) {
			cin >> temp;
			arr[n][m] += temp;
		}
	for (int n = 0; n < row; n++) {
		for (int m = 0; m < column; m++) {
			cout << arr[n][m] << ' ';
		}
		cout << endl;
	}
	return 0;
}