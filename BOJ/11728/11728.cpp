#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int size_A, size_B, *arr, size;
	cin >> size_A >> size_B;
	arr = new int[size_A + size_B];
	size = size_A + size_B;
	for (int n = 0; n < size; n++)
		cin >> arr[n];
	sort(arr, arr + size);
	for (int n = 0; n < size; n++)
		cout << arr[n] << ' ';
	cout << endl;
	return 0;
}