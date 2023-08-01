#include <iostream>
using namespace std;
int main() {
	int X, rest = 0;
	cin >> X;
	while (X != 1) {
		if (X % 2 == 1)
			rest++;
		X /= 2;
	}
	cout << rest + 1 << endl;
	return 0;
}