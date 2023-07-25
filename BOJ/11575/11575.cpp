#include <iostream>
#include <string>
using namespace std;
int main() {
	int test_case, A,B;
	string str;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> A >> B >> str;
		for (int m = 0; m < str.size(); m++) {
			str[m] = (A * (str[m] - 'A') + B) % 26 + 'A';
		}
		cout << str << endl;
	}
	return 0;
}