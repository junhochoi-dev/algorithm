#include <iostream>
using namespace std;
int main() {
	int num, arr[21];
	cin >> num;
	arr[0] = 0;
	arr[1] = 1;
	for (int n = 2; n <= num; n++)
		arr[n] = arr[n - 1] + arr[n - 2];
	cout << arr[num] << endl;
	return 0;
}