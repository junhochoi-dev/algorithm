#include <iostream>
#include <string>
using namespace std;
int main() {
	int size, sum = 0;
	string str;
	cin >> size;
	cin.ignore();
	cin >> str;
	for (int n = 0; n < size; n++) {
		sum += str[n] - 'A' + 1;
	}
	cout << sum << endl;
	return 0;
}
