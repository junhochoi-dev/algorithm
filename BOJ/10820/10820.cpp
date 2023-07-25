#include <iostream>
#include <string>
using namespace std;
int main(void) {
	string str;
	int upper, lower, num, space;
	while (getline(cin, str)) {
		upper = lower = num = space = 0;
		for (int n = 0; n < str.size(); n++) {
			if (str[n] >= 'a' && str[n] <= 'z')
				lower++;
			if (str[n] >= 'A' && str[n] <= 'Z')
				upper++;
			if (str[n] >= '0' && str[n] <= '9')
				num++;
			if (str[n] == ' ')
				space++;
		}
		cout << lower << ' ' << upper << ' ' << num << ' ' << space << endl;
	}
	return 0;
}