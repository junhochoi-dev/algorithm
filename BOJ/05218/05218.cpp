#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
	int test_case, index;
	string str;
	cin >> test_case;
	cin.ignore();
	for (int n = 0; n < test_case; n++) {
		getline(cin, str);
		index = str.find(' ');
		cout << "Distances:";
		for (int m = 0; str[m] != ' '; m++) {
			if (str[m] > str[m + index + 1])
				cout << ' ' << (int)(26 - str[m] + str[m + index + 1]);
			else
				cout << ' ' << abs((int)(str[m] - str[m + index + 1]));
		}
		cout << endl;
	}
	return 0;
}