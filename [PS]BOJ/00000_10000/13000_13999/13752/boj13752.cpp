#include <iostream>
#include <string>
using namespace std;
int main() {
	int test_case, cnt;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> cnt;
		for (int m = 0; m < cnt; m++) {
			cout << "=";
		}
		cout << endl;
	}
	return 0;
}