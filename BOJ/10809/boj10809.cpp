#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char str[100];
	int alphabet[26];
	memset(alphabet, -1, sizeof(alphabet));
	cin >> str;
	for (int n = 0; str[n]; n++) {
		if (alphabet[str[n] - 'a'] == -1)
			alphabet[str[n] - 'a'] = n;
	}
	for (int n = 0; n < 26; n++) {
		cout << alphabet[n] << ' ';
	}
	return 0;
}