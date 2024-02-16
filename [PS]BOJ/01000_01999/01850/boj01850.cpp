#include <iostream>
using namespace std;
long long GCD(long long a, long long b);
int main() {
	long long A, B;
	cin >> A >> B;
	long long end = GCD(A, B);
	for (int n = 0; n < end; n++) {
		cout << '1';
	}
	cout << endl;
	return 0;
}
long long GCD(long long a, long long b) {
	long long r;
	if (a < b)
		swap(a, b);
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}