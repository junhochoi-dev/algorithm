#include <iostream>
using namespace std;
int main() {
	int test_case, x, y;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> x >> y;
		cout << "Case " << n + 1 << ": " << x + y << endl;
	}
	return 0;
}