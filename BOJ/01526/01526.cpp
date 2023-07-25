#include <iostream>
#include <string>
using namespace std;
bool check(string str) {
	for (int n = 0; n < str.size(); n++) {
		if (str[n] != '4' && str[n] != '7')
			return false;
	}
	return true;
}
int main() {
	int num;
	string tmp;
	cin >> num;
	while (true) {
		tmp = to_string(num--);
		if (check(tmp)) {
			cout << tmp << endl;
			break;
		}
	}
	return 0;
}