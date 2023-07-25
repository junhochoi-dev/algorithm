#include <iostream>
#include <string>
using namespace std;
int main() {
	int test_case, sum;
	string str;
	cin >> test_case;
	cin.ignore();
	for (int n = 0; n < test_case; n++) {
		getline(cin, str);
		sum = 0;
		for (int m = 0; m < str.size(); m++) {
			if (str[m] >= 'A' && str[m] <= 'Z')
				sum += str[m] - 'A' + 1;
		}
		if (sum == 100)
			cout << "PERFECT LIFE" << endl;
		else
			cout << sum << endl;
	}
	return 0;
}