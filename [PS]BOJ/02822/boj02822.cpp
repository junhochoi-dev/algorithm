#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int arr[8], tmp[8], sum = 0;
	for (int n = 0; n < 8; n++) {
		cin >> arr[n];
		tmp[n] = arr[n];
	}
	sort(tmp, tmp + 8);
	for (int n = 3; n < 8; n++) {
		sum += tmp[n];
	}
	cout << sum << endl;
	for (int n = 0; n < 8; n++) {
		for (int m = 3; m < 8; m++)
			if (tmp[m] == arr[n])
				cout << n + 1 << ' ';
	}
	cout << endl;
	return 0;
}