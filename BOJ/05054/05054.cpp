#include <iostream>
using namespace std;
int main() {
	int test_case, count, store, min, max;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		min = 100;
		max = 0;
		cin >> count;
		for (int m = 0; m < count; m++) {
			cin >> store;
			if (min > store)
				min = store;
			if (max < store)
				max = store;
		}
		cout << (max - min) * 2 << endl;
	}
	return 0;
}