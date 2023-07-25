#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main() {
	int alphabet[26], test_case, sum;
	string str;
	cin >> test_case;
	cin.ignore();
	for (int n = 0; n < test_case; n++) {
		getline(cin, str);
		memset(alphabet, 0, 26 * sizeof(int));
		for (int m = 0; m < str.size(); m++) {
			if (str[m] >= 'a' && str[m] <= 'z')
				alphabet[str[m] - 'a']++;
			if (str[m] >= 'A' && str[m] <= 'Z')
				alphabet[str[m] - 'A']++;
		}
		sum = 1;
		for (int m = 0; m < 26; m++)
			sum *= alphabet[m];
		if (sum == 0) {
			cout << "missing ";
			for (int m = 0; m < 26; m++) {
				if (alphabet[m] == 0)
					cout << (char)(m + 'a');
			}
			cout << endl;
		}
		else
			cout << "pangram" << endl;
	}
	return 0;
}