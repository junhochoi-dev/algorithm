#include <iostream>
#include <string>
using namespace std;
int main() {
	bool check = true;
	int size;
	string str;
	cin >> size >> str;
	for (int n = 0; n < size * 2 - 1; n++) {
		if (str[n] == str[n + 1])
			check = false;
	}
	if (check)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}