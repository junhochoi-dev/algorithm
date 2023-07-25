#include <iostream>
using namespace std;
int main() {
	int size, num;
	long long arr[68];
	arr[0] = arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	for (int n = 4; n < 68; n++) {
		arr[n] = arr[n - 1] + arr[n - 2] + arr[n - 3] + arr[n - 4];
	}
	cin >> size;
	for (int n = 0; n < size; n++) {
		cin >> num;
		cout << arr[num] << endl;
	}

	return 0;
}