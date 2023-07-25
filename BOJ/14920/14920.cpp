#include <iostream>
using namespace std;
int main() {
	int num, cnt = 0;
	cin >> num;
	while (num != 1) {
		if (num % 2 == 0)
			num /= 2;
		else
			num = num * 3 + 1;
		cnt++;
	}
	cout << cnt + 1 << endl;
	return 0;
}