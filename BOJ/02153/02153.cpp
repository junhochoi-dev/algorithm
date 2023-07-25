#include <iostream>
#include <string>
using namespace std;
int main() {
	int value = 0, cnt = 0;
	string str;
	cin >> str;
	for (int n = 0; n < str.size(); n++) {
		if (str[n] >= 'a' && str[n] <= 'z')
			value += str[n] - 'a' + 1;
		if (str[n] >= 'A' && str[n] <= 'Z')
			value += str[n] - 'A' + 27;
	}
	for (int n = 1; n <= value; n++) {
		if (value % n == 0)
			cnt++;
	}
	if (cnt == 2 || value == 1)
		cout << "It is a prime word." << endl;
	else
		cout << "It is not a prime word." << endl;
	return 0;
}