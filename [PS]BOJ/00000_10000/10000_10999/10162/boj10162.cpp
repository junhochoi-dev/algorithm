#include <iostream>
#include <string>
using namespace std;
int main() {
	int num;
	cin >> num;
	if (num % 10 != 0) {
		cout << -1 << endl;
		return 0;
	}
	cout << num / 300 << ' ';
	num %= 300;
	cout << num / 60 << ' ';
	num %= 60;
	cout << num / 10 << endl;
	return 0;
}