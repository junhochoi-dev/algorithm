#include <iostream>
using namespace std;
int main() {
	int sum = 1, num, count[10] = { 0 };
	for (int n = 0; n < 3; n++) {
		cin >> num;
		sum *= num;
	}
	while (sum != 0) {
		count[sum % 10]++;
		sum /= 10;
	}
	for (int n = 0; n < 10; n++) {
		cout << count[n] << endl;
	}
	return 0;
}