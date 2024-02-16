#include <iostream>
#include <string>
using namespace std;
int main() {
	int test_case, size, max, drink;
	string str, tmp;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> size;
		max = 0;
		for (int m = 0; m < size; m++) {
			cin >> str >> drink;
			if (drink > max) {
				max = drink;
				tmp = str;
			}
		}
		cout << tmp << endl;
	}
	return 0;
}