#include <iostream>
using namespace std;
int main() {
	int size, *arr, top, bottom = 0, gap = 0;
	cin >> size;
	arr = new int[size];
	for (int n = 0; n < size; n++)
		cin >> arr[n];
	for (int n = 0; n < size - 1; n++) {
		if (arr[n] < arr[n + 1]) {
			top = arr[n + 1];
			if (bottom == 0)
				bottom = arr[n];
			if (gap < top - bottom)
				gap = top - bottom;
		}
		else {
			bottom = 0;
		}
	}
	cout << gap << endl;
	return 0;
}