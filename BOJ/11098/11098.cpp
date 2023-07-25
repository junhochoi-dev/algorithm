#include <iostream>
#include <string>
using namespace std;
int main() {
	int test_case, size, price, max;
	string str, tmp;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> size;
		max = 0;
		for (int m = 0; m < size; m++) {
			cin >> price >> str;
			if (max < price) {
				max = price;
				tmp = str;
			}
		}
		cout << tmp << endl;
	}
	return 0;
}