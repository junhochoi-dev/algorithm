#include <iostream>
#include <string>
using namespace std;
int main() {
	int JOI = 0, IOI = 0;
	string str;
	cin >> str;
	for (int n = 1; n < str.size() - 1; n++) {
		if (str[n] == 'O') {
			if (str[n - 1] == 'J' && str[n + 1] == 'I')
				JOI++;
			if (str[n - 1] == 'I' && str[n + 1] == 'I')
				IOI++;
		}
	}
	cout << JOI << endl << IOI << endl;
	return 0;
}