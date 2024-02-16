#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	int test_case;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> str;
		cout << "String #" << n + 1 << endl;
		for (int m = 0; m < str.size(); m++) {
			if (str[m] != 'Z')
				cout << (char)(str[m] + 1);
			else
				cout << 'A';
		}
		cout << endl << endl;
	}
	return 0;
}