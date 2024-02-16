#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	for (int n = 1; n <= 2 * num; n++) {
		for (int m = 0; m < num; m++)
			if ((m+n) % 2 == 1)
				cout << "*";
			else
				cout << " ";
		cout << endl;
	}
	return 0;
}