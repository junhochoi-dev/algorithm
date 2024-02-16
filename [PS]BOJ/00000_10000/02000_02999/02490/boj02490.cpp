#include <iostream>
using namespace std;
int main() {
	int sum, value;
	for (int n = 0; n < 3; n++) {
		sum = 0;
		for (int m = 0; m < 4; m++) {
			cin >> value;
			sum += value;
		}
		switch (sum) {
		case 0:
			cout << "D" << endl;
			break;
		case 1:
			cout << "C" << endl;
			break;
		case 2:
			cout << "B" << endl;
			break;
		case 3:
			cout << "A" << endl;
			break;
		case 4:
			cout << "E" << endl;
			break;
		}
	}
	return 0;
}