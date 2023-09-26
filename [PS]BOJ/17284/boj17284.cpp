#include <iostream>
#include <string>
using namespace std;
int main() {
	int sum = 0;
	string str;
	getline(cin, str);
	for (int n = 0; n < str.size(); n+=2) {
		if (str[n] == '1')
			sum += 500;
		if (str[n] == '2')
			sum += 800;
		if (str[n] == '3')
			sum += 1000;
	}
	cout << 5000 - sum << endl;
	return 0;
}