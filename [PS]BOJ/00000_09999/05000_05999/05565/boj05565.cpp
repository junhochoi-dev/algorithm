#include <iostream>
using namespace std;
int main() {
	int sum, price;
	cin >> sum;
	for (int n = 0; n < 9; n++) {
		cin >> price;
		sum -= price;
	}
	cout << sum << endl;
	return 0;
}