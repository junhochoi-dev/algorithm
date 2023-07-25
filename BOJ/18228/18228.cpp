#include <iostream>
using namespace std;
int main() {
	bool check = true;
	int cnt, min_first= 1000000000, min_second = 1000000000, value;
	cin >> cnt;
	for (int n = 0; n < cnt; n++) {
		cin >> value;
		if (value == -1) {
			check = false;
			continue;
		}
		if (check == true) {
			min_first = min_first > value ? value : min_first;
		}
		if (check == false) {
			min_second = min_second > value ? value : min_second;
		}
	}
	cout << min_second + min_first << endl;
	return 0;
}