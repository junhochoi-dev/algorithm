#include <iostream>
using namespace std;
int main() {
	int count;
	char str[4];
	cin >> count;
	for (int n = 0; n < count; n++) {
		cin.ignore();
		cin >> str;
		cout << str[0] + str[2] - '0' - '0' << endl;
	}
	return 0;
}