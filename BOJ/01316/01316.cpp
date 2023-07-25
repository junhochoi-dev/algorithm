#include <iostream>
#include <cstring>
#define Alpha 26
using namespace std;
int main() {
	int count, alphabet[26] = { 0 }, group_count = 0;
	char str[100] = { '\0' };
	cin >> count;
	for (int n = 0; n < count; n++) {
		cin.ignore();
		cin >> str;
		for (int m = 0; str[m]; m++) {
			if (str[m + 1] != '\0' && (str[m] != str[m + 1])) {
				alphabet[str[m + 1] - 'a']++;
			}
		}
		alphabet[str[0] - 'a']++;

		for (int m = 0; m < Alpha; m++) {
			if (alphabet[m] > 1) {
				goto space;
			}
		}
		group_count++;
	space:
		memset(str, '\0', sizeof(str));
		memset(alphabet, 0, sizeof(alphabet));
	}
	cout << group_count << endl;
	return 0;
}