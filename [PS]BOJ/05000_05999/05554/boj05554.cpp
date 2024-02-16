#include <iostream>
using namespace std;
int main() {
	int sec, sum_sec = 0;
	for (int n = 0; n < 4; n++) {
		cin >> sec;
		sum_sec += sec;
	}
	cout << sum_sec / 60 << endl << sum_sec % 60 << endl;
	return 0;
}