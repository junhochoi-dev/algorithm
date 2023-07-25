#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	for (int n = 0; n < num - 1; n++) {
		for (int m = 0; m < num - n - 1; m++)
			cout << ' ';
		cout << '*';
		if (n != 0) {
			for (int m = 0; m < 2 * n - 1; m++)
				cout << ' ';
			cout << '*';
		}
		cout << endl;
	}
	for (int m = 0;  m < 2 * num - 1; m++)
		cout << '*';
	return 0;
}