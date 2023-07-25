#include <iostream>
using namespace std;
int main() {
	long long x, y;
	while (true) {
		cin >> x >> y;
		if (x == 0 && y == 0)
			break;
		cout << x / y << ' ' << x % y << " / " << y << endl;
	}
	return 0;
}