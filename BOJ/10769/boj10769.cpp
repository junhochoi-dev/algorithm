#include <iostream>
#include <string>
using namespace std;
int main() {
	int HAPPY = 0, SAD = 0;
	string str;
	getline(cin, str);
	for (int n = 1; n < str.size() - 1; n++) {
		if (str[n] == '-') {
			if (str[n - 1] == ':' && str[n + 1] == ')')
				HAPPY++;
			if (str[n - 1] == ':' && str[n + 1] == '(')
				SAD++;
		}
	}
	if (HAPPY == 0 && SAD == 0)
		cout << "none" << endl;
	else if (HAPPY == SAD)
		cout << "unsure" << endl;
	else if (HAPPY > SAD)
		cout << "happy" << endl;
	else if (HAPPY < SAD)
		cout << "sad" << endl;
	return 0;
}