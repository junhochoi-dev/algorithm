#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int size, *arr;
	cin >> size;
	arr = new int[size];
	for (int n = 0; n < size; n++)
		cin >> arr[n];
	sort(arr, arr + size);
	cout << arr[0] << ' ';
	for (int n = 1; n < size; n++) {
		if (arr[n - 1] != arr[n])
			cout << arr[n] << ' ';
	}
	cout << endl;
	return 0;
}