#include <iostream>
#include <string>
using namespace std;
int main() {
	int size;
	string str;
	cin >> size;
	cin.ignore();
	for (int n = 0; n < size; n++) {
		cin >> str;
		cout << str.front() << str.back() << endl;
	}
	return 0;
}