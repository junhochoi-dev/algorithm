#include <iostream>
using namespace std;
int main() {
	int test_case, cnt, price, sum, option;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> sum;
		cin >> option;
		for (int m = 0; m < option; m++) {
			cin >> cnt >> price;
			sum += cnt * price;
		}
		cout << sum << endl;
	}
	return 0;
}