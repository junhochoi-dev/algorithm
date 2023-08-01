#include <iostream>
using namespace std;
int main() {
	bool check_up, check_down;
	int test_case, num, up, down, cnt;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> num;
		up = down = num / 2;
		while (true) {
			check_up = check_down = true;
			cnt = 0;
			for (int m = 1; m <= up; m++) {
				if (up % m == 0)
					cnt++;
				if (cnt > 2) {
					check_up = false;
					break;
				}
			}

			cnt = 0;
			for (int m = 1; m <= down; m++) {
				if (down % m == 0)
					cnt++;
				if (cnt > 2) {
					check_down = false;
					break;
				}
			}
			if (check_down && check_up) {
				cout << down << ' ' << up << endl;
				break;
			}
			else{
				down--;
				up++;
			}
		}
	}
	return 0;
}