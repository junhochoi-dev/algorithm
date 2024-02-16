#include <iostream>
using namespace std;
int main() {
	int a, b;
	while (true) {
		cin >> a >> b;
		if (a == 0 && b == 0)
			return 0;
		else
			cout << a + b << '\n';
	}
	return 0;
}