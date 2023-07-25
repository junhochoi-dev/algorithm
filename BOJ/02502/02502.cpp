#include <iostream>
using namespace std;
int main() {
	int D, K, arr[30], A = 0, B = 0, a, b;
	cin >> D >> K;
	arr[0] = arr[1] = 1;
	for (int n = 2; n <= D - 2; n++) {
		arr[n] = arr[n - 1] + arr[n - 2];
	}
	a = arr[D - 3];
	b = arr[D - 2];
	for (int n = 1; B * n < K; n++) {
		for (int m = 1; m <= n; m++) {
			if (a*m + b * n == K) {
				A = m;
				B = n;
				goto space;
			}
		}
	}
	space:
	cout << A << endl << B << endl;
	return 0;
}