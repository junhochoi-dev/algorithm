#include <iostream>
using namespace std;
int main() {
	int test_case, num, x;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> num;
		x = 1;
		for (int m = 1; m < num; m++) {
			x = x * 2 + 1;
		}
		cout << x << endl;
	}
	return 0;
}