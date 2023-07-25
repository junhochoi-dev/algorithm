#include <iostream>
using namespace std;
int main() {
	int num, divisor, test_case;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		divisor = 0;
		cin >> num;
		if (num == 1) {
			cout << 1 << " " << 1 << endl;
			continue;
		}
		for (int n = 2; n < num; n++) {
			if (num % n == 0)
				divisor++;
		}
		cout << num << " " << divisor + 2 << endl;
	}
	return 0;
}