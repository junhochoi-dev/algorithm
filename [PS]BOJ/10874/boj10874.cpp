#include <iostream>
using namespace std;
int main() {
	int test_case, ans, cnt;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cnt = 0;
		for (int m = 1; m <= 10; m++) {
			cin >> ans;
			if (ans == ((m - 1) % 5 + 1))
				cnt++;
		}
		if (cnt == 10)
			cout << n + 1 << endl;
	}
	return 0;
}