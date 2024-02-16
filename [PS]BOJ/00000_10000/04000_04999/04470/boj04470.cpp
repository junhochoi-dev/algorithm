#include <iostream>
#include <string>
using namespace std;
int main() {
	int test_case;
	string str;
	cin >> test_case;
	cin.ignore();
	for (int n = 0; n < test_case; n++) {
		getline(cin, str);
		cout << n + 1 << ". " << str << endl;
	}
	return 0;
}