#include <iostream>
using namespace std;
int main() {
	int a, b, count;
	cin >> count;
	for (int n = 0; n < count; n++) {
		cin >> a >> b;
		cout << "Case #" << n + 1 << ": " << a << " + " << b << " = " << a + b << '\n';
	}
	return 0;
}