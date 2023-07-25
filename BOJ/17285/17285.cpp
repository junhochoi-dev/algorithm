#include <iostream>
#include <string>
using namespace std;
int main() {
	char key;
	string str;
	cin >> str;
	key = 'C' ^ str[0];
	for (int n = 0; n < str.size(); n++) {
		str[n] =str[n] ^ (char)key;
	}
	cout << str << endl;
	return 0;
}