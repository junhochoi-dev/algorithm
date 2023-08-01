#include <iostream>
#include <string>
using namespace std;
int main() {
	int count = 0; 
	string str;
	getline(cin, str);
	for (int n = 0; n < str.length(); n++) {
		if (str[n] == ' ')
			count++;
	}
	if (str[0] == ' ')
		count--;
	if (str[str.length() - 1] == ' ')
		count--;
	cout << count + 1 << endl;
	return 0;
}