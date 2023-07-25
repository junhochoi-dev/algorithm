#include <iostream>
using namespace std;
int GCD(int a, int b) {
	while (b != 0) {
		int c = a % b;
		a = b;
		b = c;
	}
	return a;
}
int LCM(int a, int b) {
	return a * b / GCD(a, b);
}
int main() {
	int a, b, test_case;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> a >> b;
		cout << LCM(a, b) << endl;
	}
	return 0;
}