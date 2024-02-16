#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int arr[3];
	for (int n = 0; n < 3; n++)
		cin >> arr[n];
	sort(arr, arr + 3);
	for (int n = 0; n < 3; n++)
		cout << arr[n] << ' ';
}