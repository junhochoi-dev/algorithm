#include <iostream>
using namespace std;
int main() {
	int num, sum = 1;
	cin >> num;
	for (int n = 1; ; n++) {
		if (sum >= num) {
			cout << n;
			break;
		}
		sum += 6 * n;
	}
	return 0;
}