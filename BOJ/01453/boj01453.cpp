#include <iostream>
using namespace std;
int main() {
	int size, seat, sum = 0, arr[100] = {0};
	cin >> size;
	for (int n = 0; n < 100; n++)
		arr[n] = 0;
	for (int n = 0; n < size; n++) {
		cin >> seat;
		arr[seat - 1]++;
	}
	for (int n = 0; n < 100; n++)
		if (arr[n] > 1)
			sum += arr[n] - 1;
	cout << sum << endl;
	return 0;
}