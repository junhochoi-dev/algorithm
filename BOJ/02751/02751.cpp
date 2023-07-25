#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int *arr, size;
	cin >> size;
    arr = new int[size];
	for (int n = 0; n < size; n++)
		cin >> arr[n];
	sort(arr, arr + size);
	for (int n = 0; n < size; n++)
		cout << arr[n] << "\n";
	return 0;
}