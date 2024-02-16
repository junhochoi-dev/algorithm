#include <iostream>
using namespace std;
int main() {
	long long arr[36] = { 0 }, num;
	arr[0] = arr[1] = 1;
	cin >> num;
	for (int n = 2; n <= num; n++) {
		for (int m = 0; m <= n - 1; m++) {
			arr[n] += arr[m] * arr[n - 1 - m];
		}
	}
	cout << arr[num] << endl;
	return 0;
}