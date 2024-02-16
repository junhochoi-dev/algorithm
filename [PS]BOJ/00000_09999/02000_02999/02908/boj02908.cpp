#include <iostream>
using namespace std;
int main() {
	int first, second;
	cin >> first >> second;
	first = first / 100 + first % 10 * 100 + first % 100 - first % 10;
	second = second / 100 + second % 10 * 100 + second % 100 - second % 10;
	if (first > second)
		cout << first << endl;
	else
		cout << second << endl;
	return 0;
}