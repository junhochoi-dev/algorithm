#include <iostream>
#include <string>
using namespace std;
int main() {
	int num[10] = { 0 }, sum = 0;
	string str;
	cin >> str;
	for (int n = 0; n < str.size(); n++) {
		num[str[n] - '0']++;
		sum += str[n] - '0';
	}
	if ((num[0] > 0) && (sum % 3 == 0)) {
		for (int n = 9; n >= 0; n--)
			for (int m = 1; m <= num[n]; m++)
				cout << n;
		cout << endl;
	}
	else
		cout << -1 << endl;

	return 0;
}