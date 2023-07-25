#include <iostream>
using namespace std;
int main() {
	int sum;
	string str;
	while (true) {
		sum = 0;
		cin >> str;
		if (str == "0")
			break;
		for (int n = 0; n < str.size(); n++) {
			if (str[n] == '1')
				sum += 2;
			else if (str[n] == '0')
				sum += 4;
			else
				sum += 3;
		}
		sum += str.size() + 1;
		cout << sum << endl;
	}
	return 0;
}