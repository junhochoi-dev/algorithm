#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int num[10], count = 0;
	for (int n = 0; n < 10; n++) {
		cin >> num[n];
		num[n] %= 42;;
	}
	sort(num, num + sizeof(num) / 4);
	for (int n = 0; n < 9; n++) {
		if (num[n] == num[n + 1])
			count++;
	}
	cout << 10 - count << endl;
	return 0;
}