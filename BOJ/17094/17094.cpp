#include <iostream>
using namespace std;
int main() {
	int size, two = 0;
	string str;
	cin >> size;
	cin.ignore();
	cin >> str;
	for (int n = 0; n < size; n++)
		if (str[n] == '2')
			two++;
	if (size == two * 2)
		cout << "yee" << endl;
	if (size - two > two)
		cout << 'e' << endl;
	if (size - two < two)
		cout << '2' << endl;
	return 0;
}