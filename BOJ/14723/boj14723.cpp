#include <iostream>
using namespace std;
int main() {
	int num, cnt = 1, gap;
	cin >> num;
	while (true) {
		if (num == 1) {
			cout << 1 << ' ' << 1 << endl;
			break;
		}
		if ((cnt * (cnt + 1)) / 2 < num && ((cnt + 1)*(cnt + 2)) / 2 >= num) {
			gap = num - (cnt * (cnt + 1)) / 2;
			cout << cnt + 2 - gap << ' ' << gap << endl;
			break;
		}
		cnt++;
	}

	return 0;
}