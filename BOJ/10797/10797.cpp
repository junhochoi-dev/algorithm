#include <iostream>
using namespace std;
int main() {
	int num, car, count = 0;
	cin >> num;
	for (int n = 0; n < 5; n++) {
		cin >> car;
		if (car == num)
			count++;
	}
	cout << count << endl;
	return 0;
}