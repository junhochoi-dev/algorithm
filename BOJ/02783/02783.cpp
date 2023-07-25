#include <iostream>
using namespace std;
int main() {
	cout << fixed;
	cout.precision(2);
	int test_case;
	double gram_s, price_s;
	double gram, price, top;
	cin >> price_s >> gram_s;
	top = price_s / gram_s;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> price >> gram;
		if (top > (price / gram))
			top = price / gram;
	}
	cout << top * 1000 << endl;
	return 0;
}