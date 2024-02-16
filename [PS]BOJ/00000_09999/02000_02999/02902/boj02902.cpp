#include <iostream>
using namespace std;
int main() {
	char str[100];
	cin >> str;
	cout << str[0];
	for (int n = 1; str[n]; n++) {
		if (str[n] == '-')
			cout << str[n + 1];
	}
	cout << endl;
	return 0;
}