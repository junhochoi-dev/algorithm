#include <iostream>
using namespace std;
int main() {
	int num, sum = 0, count = 0, min = 100;
	for (int n = 0; n < 7; n++) {
		cin >> num;

		if (num % 2 == 1) {
			count++;
			sum += num;
			if (min > num)
				min = num;
		}
	}
	if (count == 0)
		cout << "-1" << endl;
	else {
		cout << sum << endl;
		cout << min << endl;
	}
	return 0;
}