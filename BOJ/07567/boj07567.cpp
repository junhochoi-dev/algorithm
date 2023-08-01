#include <iostream>
#include <string>
using namespace std;
int main() {
	int sum = 10;
	string str;
	cin >> str;
	for (int n = 1; n < str.size(); n++) {
		if (str[n] != str[n - 1])
			sum += 10;
		else
			sum += 5;
	}
	cout << sum << endl;
	return 0;
}