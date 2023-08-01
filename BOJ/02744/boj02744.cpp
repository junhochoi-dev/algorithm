#include <iostream>
using namespace std;
int main() {
	string str;
	cin >> str;
	for (int n = 0; n < str.size(); n++) {
		if (str[n] >= 'a' && str[n] <= 'z') {
			cout << (char)(str[n] - 32);
		}
		else if (str[n] >= 'A' && str[n] <= 'Z') {
			cout << (char)(str[n] + 32);
		}
	}
	return 0;
}