#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int dice1, dice2, dice3;
	cin >> dice1 >> dice2 >> dice3;
	if (dice1 == dice2 && dice2 == dice3)
		cout << 10000 + 1000 * dice1 << endl;
	else if (dice1 == dice2 || dice2 == dice3 || dice3 == dice1) {
		if (dice1 == dice2)
			cout << 1000 + dice1 * 100;
		if (dice2 == dice3)
			cout << 1000 + dice2 * 100;
		if (dice3 == dice1)
			cout << 1000 + dice3 * 100;
	}
	else {
		cout << max(dice1, max(dice2, dice3)) * 100;
	}
	return 0;
}