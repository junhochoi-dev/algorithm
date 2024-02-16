#include <iostream>
using namespace std;
int main() {
	long long arr[100] = { 0 }, num;
	arr[0] = 0;
	arr[1] = 1;
	cin >> num;
	for (int n = 2; n <= num; n++)
		arr[n] = arr[n - 2] + arr[n - 1];
	cout << arr[num] << endl;
	return 0;
}