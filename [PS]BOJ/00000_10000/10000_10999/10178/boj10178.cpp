#include <iostream>
using namespace std;
int main() {
	int test_case, candy, son;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> candy >> son;
		cout << "You get " << candy / son << " piece(s) and your dad gets " << candy % son << " piece(s)." << endl;
	}
	return 0;
}