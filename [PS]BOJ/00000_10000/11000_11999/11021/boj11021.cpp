#include <iostream>
using namespace std;
int main() {
	int count, a, b;
	cin >> count;
	for (int n = 0; n < count; n++) {
		cin >> a >> b;
		cout << "Case #" << n + 1 << ": " << a + b << endl;
	}
	return 0;
}