#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	for (int n = 0; n < num; n++) {
		if (n % 2 == 1)
			cout << " ";
		for (int m = 0; m < num; m++) {
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}