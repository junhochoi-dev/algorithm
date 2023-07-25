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
	for (int n = 0; n < size; n++) {
		cout << arr[n] << endl;
	}
	return 0;
}