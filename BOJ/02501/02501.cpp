#include <iostream>
using namespace std;
int main() {
	int num, order, cnt = 0;
	cin >> num >> order;
	for (int n = 1; n <= num; n++) {
		if (num % n == 0) {
			cnt++;
			if (cnt == order) {
				cout << n << endl;
				return 0;
			}
		}
	}
	if (cnt < order)
		cout << 0 << endl;
	return 0;
}