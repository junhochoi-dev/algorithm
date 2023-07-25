#include <iostream>
using namespace std;
int main() {
	int test_case, A, B;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> A >> B;
		if (A / B == (double)A / B)
			cout << (A / B) * (A / B) << endl;
		else
			cout << (A / B + 1) * (A / B + 1) << endl;
	}
	return 0;
}