#include <iostream>
#include <string>
using namespace std;
int main() {
	int test_case, cnt = 0, num;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> num;
		if (num == 1)
			cnt++;
	}
	if (test_case / 2 + 1 <= cnt)
		cout << "Junhee is cute!" << endl;
	else
		cout << "Junhee is not cute!" << endl;
	return 0;
}