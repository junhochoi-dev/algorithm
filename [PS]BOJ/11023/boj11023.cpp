#include <iostream>
#include <string>
using namespace std;
int main() {
	int sum = 0, check = 0;
	string str, tmp;
	getline(cin, str);
	for (int n = 0; n < str.size(); n++) {
		if (str[n] == ' ') {
			tmp = str.substr(check, n - check);
			sum += stoi(tmp);
			check = n;
		}
		if (n == str.size() - 1) {
			tmp = str.substr(check, n - check + 1);
			sum += stoi(tmp);
		}

	}
	cout << sum << endl;
	return 0;
}