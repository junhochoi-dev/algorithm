#include <iostream>
using namespace std;
int main() {
	string str;
	int alphabet[26] = { 0 };
	cin >> str;
	for (int n = 0; n < str.length(); n++) {
		alphabet[str[n] - 'a']++;
	}
	for (int n = 0; n < 26; n++) {
		cout << alphabet[n] << ' ';
	}
	return 0;
}