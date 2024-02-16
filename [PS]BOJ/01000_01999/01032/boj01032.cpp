#include <iostream>
using namespace std;
int main() {
	int size;
	cin >> size;
	cin.ignore();
	string str, temp;
	cin >> str;
	if (size == 1)
		cout << str;
	else {
		temp = str;
		for (int n = 0; n < size - 1; n++) {
			cin >> str;
			for (int m = 0; m < temp.size(); m++)
				if (str[m] != temp[m])
					temp[m] = '?';
		}
	}
	cout << temp << endl;
	return 0;
}