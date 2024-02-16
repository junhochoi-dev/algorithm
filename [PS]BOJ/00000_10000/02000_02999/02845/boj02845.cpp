#include <iostream>
using namespace std;
int main() {
	int L, P, arr[5];
	cin >> L >> P;
	for (int n = 0; n < 5; n++)
		cin >> arr[n];
	for (int n = 0; n < 5; n++)
		cout << arr[n] - L * P << ' ';
	cout << endl;
	return 0;
}