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
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		cout << str << endl;
	}
	return 0;
}