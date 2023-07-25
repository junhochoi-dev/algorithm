#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	string str;
	while (true) {
		cin.clear();
		getline(cin, str);
		if (str == "END")
			break;
		reverse(str.begin(), str.end());
		cout << str << endl;

	}

	return 0;
}