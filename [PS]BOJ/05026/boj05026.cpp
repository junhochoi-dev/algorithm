#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	int test_case, A, B, index = 0;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> str;
		if (str == "P=NP")
			cout << "skipped" << endl;
		else {
			for (int m = 0; m < str.size(); m++)
				if (str[m] == '+')
					index = m;
			A = stoi(str.substr(0, index));
			B = stoi(str.substr(index + 1, str.size() - index - 1));
			cout << A + B << endl;
		}
	}
	return 0;
}