#include <iostream>
using namespace std;
long long factorial(int x) {
	long long sum = 1;
	for (int n = 1; n <= x; n++)
		sum *= n;
	return sum;
}
long long method(int a, int b, int c) {
	return factorial(a + b + c) / factorial(a) / factorial(b) / factorial(c);
}
int main() {
	int test_case, num, sum;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> num;
		sum = 0;
		for (int m = 0; m <= num / 3; m++) {
			for (int i = 0; i <= (num - 3 * m) / 2; i++) {
				int j = num - 3 * m - 2 * i;
				sum += method(m, i, j);
			}
		}
		cout << sum << endl;
	}
	return 0;
}