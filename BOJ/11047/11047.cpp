#include <iostream>
using namespace std;

int main() {
	int coin, price, coinValue[10], count = 0;
	cin >> coin >> price;
	for (int n = 0; n < coin; n++)
		cin >> coinValue[n];
	for (int n = coin - 1; n >= 0; n--) {
		count += price / coinValue[n];
		if (price / coinValue[n] != 0)
			price %= coinValue[n];
	}
	cout << count << endl;
	return 0;
}