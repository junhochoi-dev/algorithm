#include <iostream>
using namespace std;

int main() {
	// 500 100 50 10 5 1
	// give 1000 => change

	int price, change, coinCount = 0;
	cin >> price;
	change = 1000 - price;
	if (change / 500 != 0) {
		coinCount += change / 500;
		change %= 500;
	}
	if (change / 100 != 0) {
		coinCount += change / 100;
		change %= 100;
	}
	if (change / 50 != 0) {
		coinCount += change / 50;
		change %= 50;
	}
	if (change / 10 != 0) {
		coinCount += change / 10;
		change %= 10;
	}
	if (change / 5 != 0) {
		coinCount += change / 5;
		change %= 5;
	}
	if (change / 1 != 0) {
		coinCount += change / 1;
		change %= 1;
	}
	cout << coinCount << endl;

	return 0;
}