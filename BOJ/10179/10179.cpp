#include <iostream>
using namespace std;
int main() {
	cout << fixed;
	cout.precision(2);
	double val;
	int test_case;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> val;
		cout << '$' << val * 0.8 << endl;
	}
	return 0;
}