#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int count, dice1, dice2, dice3, price, max_price = 0;
	cin >> count;
	for (int n = 0; n < count; n++) {
		price = 0;
		cin >> dice1 >> dice2 >> dice3;
		if (dice1 == dice2 && dice2 == dice3 && dice3 == dice1)
			price += 1000 * dice1 + 10000;
		else if (dice1 != dice2 && dice2 != dice3 && dice3 != dice1)
			price += 100 * max(max(dice1, dice2), dice3);
		else {
			if (dice1 == dice2) {
				price += dice1 * 100 + 1000;
			}
			else if (dice2 == dice3) {
				price += dice2 * 100 + 1000;
			}
			else if (dice3 == dice1) {
				price += dice3 * 100 + 1000;
			}
		}
		if (max_price < price)
			max_price = price;
	}
	cout << max_price << endl;
	return 0;
}
