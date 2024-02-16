#include <iostream>
using namespace std;
int main() {
	char str[100];
	cin >> str;
	for (int n = 0; str[n]; n++) {
		if (n % 10 == 0 && n != 0)
			cout << endl;
		cout << str[n];
	}
	return 0;
}