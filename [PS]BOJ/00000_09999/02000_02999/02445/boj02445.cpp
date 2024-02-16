#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	for (int n = 0; n < num; n++) {
		for (int m = 0; m < n + 1; m++) {
			cout << '*';
		}
		for (int m = 0; m < 2 * (num - n - 1); m++) {
			cout << ' ';
		}
		for (int m = 0; m < n + 1; m++) {
			cout << '*';
		}
		cout << endl;
	}
	for (int n = 0; n < num - 1; n++) {
		for (int m = 0; m < num - n - 1; m++) {
			cout << '*';
		}
		for (int m = 0; m < 2 * (n + 1); m++) {
			cout << ' ';
		}
		for (int m = 0; m < num - n - 1; m++) {
			cout << '*';
		}
		cout << endl;
	}
	return 0;
}