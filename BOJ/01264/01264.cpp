#include <iostream>
#include <string>
using namespace std;
int main() {
	int count;
	string str;
	cin.ignore();
	while (true) {
		count = 0;
		getline(cin, str);
		if ("#" == str)
			break;
		for (int n = 0; n < str.size(); n++) {
			switch (str[n]) {
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				count++;
				break;
			}
		}
		cout << count << endl;
	}
	return 0;
}