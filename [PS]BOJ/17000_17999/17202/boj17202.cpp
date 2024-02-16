#include <iostream>
using namespace std;
int main() {
	int num[16];
	string num1, num2;
	cin >> num1 >> num2;
	for (int n = 0; n < 8; n++) {
		num[2 * n] = num1[n] - '0';
		num[2 * n + 1] = num2[n] - '0';
	}
	for (int n = 15; n > 1; n--) {
		for (int m = 0; m < n; m++) {
			num[m] = (num[m] + num[m + 1]) % 10;
		}
	}
	cout << num[0] << num[1] << endl;
	return 0;
}