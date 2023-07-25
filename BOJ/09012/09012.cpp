#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	string str;
	int test_case, stack;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		stack = 0;
		cin >> str;
		for (int m = 0; m < str.size(); m++) {
			if (str[m] == ')') {
				stack--;
				if (stack < 0)
					break;
			}
			else if (str[m] == '(')
				stack++;
		}
		if (stack == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}