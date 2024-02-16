#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int arr[5], sum = 0;
	for (int n = 0; n < 5; n++) {
		cin >> arr[n];
		sum += arr[n];
	}
	sort(arr, arr + 5);
	cout << sum / 5 << endl << arr[2] << endl;
}