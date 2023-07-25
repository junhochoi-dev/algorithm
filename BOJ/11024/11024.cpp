#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	int test_case, sum, index;
	cin >> test_case;
	cin.ignore();
	for (int n = 0; n < test_case; n++) {
		getline(cin, str);
		sum = index = 0;
		for (int m = 0; m < str.size(); m++) {
			if (m == str.size() - 1) {
				sum += stoi(str.substr(index, str.size() - index));
			}
			else if (str[m] == ' ') {
				sum += stoi(str.substr(index, m - index));
				index = m + 1;
			}
		}
		cout << sum << endl;
	}
	return 0;
}