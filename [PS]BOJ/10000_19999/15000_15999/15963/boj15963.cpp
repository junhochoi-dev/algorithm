#include <iostream>
using namespace std;
int main() {
	string str_s, str_t;
	cin >> str_s >> str_t;
	if (str_s == str_t)
		cout << 1 << endl;
	else
		cout << 0 << endl;
	return 0;
}