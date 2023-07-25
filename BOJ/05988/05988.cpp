#include <iostream>
using namespace std;
int main() {
	int size, back;
	string str;
	cin >> size;
	for (int n = 0; n < size; n++) {
		cin >> str;
		back = str[str.size() - 1] - '0';
		if (back % 2 == 0)
			cout << "even" << endl;
		else
			cout << "odd" << endl;
	}
	return 0;
}