#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	getline(cin, str);
	for (int n = 0; n < str.size(); n++) {
		if (str[n] >= 'A' && str[n] <= 'M')
			str[n] = str[n] - 'A' + 'N';
		else if (str[n] >= 'N' && str[n] <= 'Z')
			str[n] = str[n] - 'N' + 'A';
		else if (str[n] >= 'a' && str[n] <= 'm')
			str[n] = str[n] - 'a' + 'n';
		else if (str[n] >= 'n' && str[n] <= 'z')
			str[n] = str[n] - 'n' + 'a';
	}
	cout << str << endl;
	return 0;
}