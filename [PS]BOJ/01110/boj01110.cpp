#include <iostream>
using namespace std;

int main() {
	int num, tmp, index = 0;
	cin >> num;
	tmp = num;
	while (true) {
		tmp = tmp % 10 * 10 + (tmp % 10 + tmp / 10) % 10;
		index++;
		if (tmp == num)
			break;
	}
	cout << index;
	return 0;
}