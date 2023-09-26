#include <iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	if (x % 4 == 0) {
		if ((x / 4) % 2 == 0) {
			cout << 2 << endl;
		}
		else {
			cout << 4 << endl;
		}
	}
	else {
		if ((x / 4) % 2 == 0) { // increase
			cout << x % 4 << endl;
		}
		else { //decrease
			cout << 5 - x % 4 + 1 << endl;
		}
	}
	return 0;
}
