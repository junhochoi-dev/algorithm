#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
	int sum = 0, size;
	string str;
	cin >> size;
	cin.ignore();
	for (int n = 0; n < size; n++) {
		cin >> str;
		sum += pow(stoi(str.substr(0, str.size() - 1)),(str[str.size() - 1] - '0'));
	}
	cout << sum << endl;
	return 0;
}