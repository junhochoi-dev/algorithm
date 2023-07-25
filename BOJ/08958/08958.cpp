#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	int test_case, score, stack;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		score = 0;
		stack = 1;
		cin >> str;
		if (str[0] == 'X')
			stack = 1;
		else
			score += stack;
		for (int m = 1; m < str.size(); m++) {
			if (str[m] == 'X')
				stack = 1;
			else
				if (str[m - 1] == 'O')
					score += ++stack;
				else
					score += stack;
		}
		cout << score << endl;
	}
	return 0;
}