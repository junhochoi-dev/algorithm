#include <iostream>
#include <string>
using namespace std;
int main() {
	int gap;
	bool check = true;
	string str;
	cin >> str;
	gap = str[1] - str[0];
	for (int n = 1; n < str.size() - 1; n++) {
		if (str[n + 1] - str[n] != gap) {
			check = false;
			break;
		}
	}
	if (check)
		cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!" << endl;
	else
		cout << "흥칫뿡!! <(￣ ﹌ ￣)>" << endl;
	return 0;
}