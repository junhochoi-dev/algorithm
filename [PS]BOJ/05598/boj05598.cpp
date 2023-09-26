#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	cin >> str;
	for (int n = 0; n < str.size(); n++) {
		if (str[n] >= 'D' && str[n] <= 'Z') {
			str[n] = (char)(str[n] - 'D' + 'A');
		}
		else if (str[n] >= 'A'&&str[n] <= 'C') {
			str[n] = (char)(str[n] - 'A' + 'X');
		}
	}
	cout << str << endl;
	return 0;
}
