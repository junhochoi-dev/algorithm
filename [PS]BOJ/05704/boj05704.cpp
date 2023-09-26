#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main() {
	bool check;
	int alphabet[26];
	string str;
	while (true) {
		memset(alphabet, 0, sizeof(int) * 26);
		check = true;
		getline(cin, str);
		if (str == "*")
			break;
		for (int n = 0; n < str.size(); n++) {
			if (str[n] >= 'a' && str[n] <= 'z')
				alphabet[str[n] - 'a']++;
			if (str[n] >= 'A' && str[n] <= 'Z')
				alphabet[str[n] - 'A']++;
		}
		for (int n = 0; n < 26; n++)
			if (alphabet[n] == 0)
				check = false;
		if (check) cout << "Y" << endl;
		else cout << "N" << endl;
	}
	return 0;
}