#include <iostream>
using namespace std;
int main() {
	int count = 0;
	string str;
	cin >> str;
	for (int n = 0; n < str.size(); n++)
		if (str[n] == 'a' || str[n] == 'e' || str[n] == 'i' ||
			str[n] == 'o' || str[n] == 'u')
			count++;
	cout << count << endl;
	return 0;
}