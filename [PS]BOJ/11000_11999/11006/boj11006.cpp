#include <iostream>
using namespace std;
int main() {
	int test_case, legs, chickens;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> legs >> chickens;
		cout << 2 * chickens - legs << ' ' << legs - chickens << endl;
	}
	return 0;
}