#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int count, num;
	char str[20];
	cin >> count;
	for (int n = 0; n < count; n++) {
		cin >> num;
		cin.ignore();
		memset(str, '\0', sizeof(str));
		cin >> str;
		for (int m = 0; str[m]; m++) {
			for (int j = 0; j < num; j++)
				cout << str[m];
		}
		cout << endl;
	}
	return 0;
}