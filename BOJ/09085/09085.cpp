#include <iostream>
using namespace std;
int main() {
	int test_case, size, sum, num;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> size;
		sum = 0;
		for (int m = 0; m < size; m++) {
			cin >> num;
			sum += num;
		}
		cout << sum << endl;
	}
	return 0;
}