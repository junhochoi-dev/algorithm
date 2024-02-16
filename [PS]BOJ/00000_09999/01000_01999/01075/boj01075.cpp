#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	size_t num, F;
	cin >> num >> F;
	num = num - num % 100;
	while (true) {
		if (num % F == 0) {
			cout << num / 10 % 10 << num % 10;
			break;
		}
		num++;
	}
	return 0;
}