#include <iostream>
#define MAX 10001
using namespace std;
bool arr[MAX] = { false };
int self_number(int num) {
	int sum = num;
	while (true) {
		if (num == 0)
			break;
		sum += num % 10;
		num /= 10;
	}
	return sum;
}
int main() {
	int value;
	for (int n = 1; n < MAX; n++) {
		value = self_number(n);
		if (value <= MAX)
			arr[value] = true;
	}
	for (int n = 1; n < MAX; n++) {
		if (!arr[n])
			cout << n << endl;
	}
	return 0;
}