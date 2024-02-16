#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int size, height, *arr;
	cin >> size >> height;
	arr = new int[size];
	for (int n = 0; n < size; n++)
		cin >> arr[n];
	sort(arr, arr + size);
	for (int n = 0; n < size; n++) {
		if (arr[n] <= height)
			height++;
		else
			break;
	}
	cout << height << endl;
	return 0;
}