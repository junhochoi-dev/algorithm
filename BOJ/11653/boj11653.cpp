#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	while (true) {
		for (int n = 2; n <= num; n++) {
			if (num % n == 0) {
				num /= n;
				cout << n << endl;
				break;
			}
		}
		if (num == 1)
			break;
	}
	return 0;
}
