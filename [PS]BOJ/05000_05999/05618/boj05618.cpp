#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int test_case, arr[3];
	cin >> test_case;
	if (test_case == 2) {
		cin >> arr[0] >> arr[1];
		sort(arr, arr + 2);
		for (int n = 1; n <= arr[0]; n++) {
			if (arr[0] % n == 0 && arr[1] % n == 0)
				cout << n << endl;
		}
	}
	else {
		for (int n = 0; n < 3; n++) {
			cin >> arr[n];
		}
		sort(arr, arr + 3);
		for (int n = 1; n <= arr[0]; n++) {
			if (arr[0] % n == 0 && arr[1] % n == 0 && arr[2] % n == 0)
				cout << n << endl;
		}
	}
	return 0;
}