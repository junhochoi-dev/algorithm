#include <iostream>
using namespace std;
int main() {
	int size, *arr, *tmp, sum = 0;
	cin >> size;
	arr = new int[size];
	for (int n = 0; n < size; n++) {
		cin >> arr[n];
		arr[n] *= n + 1;
	}
	for (int n = size - 1; n > 0; n--) {
		arr[n] -= arr[n - 1];
	}
	for (int n = 0; n < size; n++) {
		cout << arr[n] << ' ';
	}
	cout << endl;
	return 0;
}