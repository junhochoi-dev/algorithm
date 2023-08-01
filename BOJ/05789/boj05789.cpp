#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	int test_case;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> str;
		if (str[str.size()/2] == str[str.size() / 2 - 1])
			cout << "Do-it" << endl;
		else
			cout << "Do-it-Not" << endl;
	}
	return 0;
}