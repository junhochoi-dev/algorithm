#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	string str1, str2;
	int test_case, tmp;
	cin >> test_case;
	cin.ignore();
	for (int n = 0; n < test_case; n++) {
		cin >> str1 >> str2;
		reverse(str1.begin(), str1.end());
		reverse(str2.begin(), str2.end());
		tmp = stoi(str1) + stoi(str2);
		str1 = to_string(tmp);
		reverse(str1.begin(), str1.end());
		cout << stoi(str1) << endl;
	}
	return 0;
}