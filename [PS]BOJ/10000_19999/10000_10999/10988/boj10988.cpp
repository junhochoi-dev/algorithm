#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	string str, tmp;
	cin >> str;
	tmp = str;
	reverse(tmp.begin(), tmp.end());
	if (str == tmp)
		cout << 1 << endl;
	else
		cout << 0 << endl;
	return 0;
}