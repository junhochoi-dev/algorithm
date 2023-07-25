#include <iostream>
using namespace std;
int main() {
	string str;
	cin >> str;
	for (int n = 0; n < str.size(); n++)
		if (str[n] >= 'a' && str[n] <= 'z')
			cout << (char)(str[n] - 32);
		else
			cout << (char)str[n];
	cout << endl;
	return 0;
}