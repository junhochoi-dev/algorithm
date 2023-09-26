#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int alphabet[26], max = 0, count = 0, index;
	string str;
	memset(alphabet, 0, sizeof(int) * 26);
	cin >> str;
	for (int n = 0; n < str.size(); n++) {
		if (str[n] >= 'a' && str[n] <= 'z') {
			alphabet[str[n] - 'a']++;
		}
		else if (str[n] >= 'A' && str[n] <= 'Z') {
			alphabet[str[n] - 'A']++;
		}
	}
	for (int n = 0; n < 26; n++) {
		if (max < alphabet[n]) {
			max = alphabet[n];
			index = n;
		}
	}
	for (int n = 0; n < 26; n++) {
		if (max == alphabet[n])
			count++;
	}
	if (count == 1)
		cout << (char)(index + 'A') << endl;
	else
		cout << '?' << endl;
	return 0;
}