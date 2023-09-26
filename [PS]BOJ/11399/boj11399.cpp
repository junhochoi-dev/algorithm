#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int size, *arr, sum = 0;
	cin >> size;
	arr = new int[size];
	for (int n = 0; n < size; n++)
		cin >> arr[n];
	sort(arr, arr + size);
	sum += arr[0];
	for (int n = 1; n < size; n++){
		arr[n] = arr[n - 1] + arr[n];
		sum += arr[n];
	}
	cout << sum << endl;
	return 0;
}