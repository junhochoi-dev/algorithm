#include <iostream>
#include <cstring>
#include <algorithm>
#include <functional>
using namespace std;
int main() {
	char str[11];
	cin >> str;
	sort(str, str + strlen(str), greater<char>());
	cout << str;
	return 0;
}