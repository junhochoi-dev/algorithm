#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int num;
	cin >> num;
	int sum = 0;
	int count = 8;
	while (true) {
		if (num / ((int)(pow(10, count))) > 0) {
			for (int n = 1; n <= count; n++) {
				sum += 9 * pow(10, n - 1) * n;
			}
			num -= pow(10, count);
			sum += (count + 1) * ++num;
			cout << sum << endl;
			return 0;
		}
		count--;
	}
	return 0;
}