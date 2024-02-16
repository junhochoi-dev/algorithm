#include <iostream>
using namespace std;
int main() {
	int num, count = 1, max = 0, check;
	for (int n = 0; n < 9; n++, count++) {
		cin >> num;
		if (max < num) {
			max = num;
			check = count;
		}
	}
	cout << max << endl << check << endl;
	return 0;
}