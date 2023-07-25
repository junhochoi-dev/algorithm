#include <iostream>
using namespace std;
int main() {
	int in_hour, in_min, in_sec;
	int out_hour, out_min, out_sec;
	int in_sum, out_sum, work;
	for (int n = 0; n < 3; n++) {
		cin >> in_hour >> in_min >> in_sec;
		cin >> out_hour >> out_min >> out_sec;
		in_sum = in_hour * 3600 + in_min * 60 + in_sec;
		out_sum = out_hour * 3600 + out_min * 60 + out_sec;
		work = out_sum - in_sum;
		cout << work / 3600 << ' ';
		work %= 3600;
		cout << work / 60 << ' ';
		work %= 60;
		cout << work << endl;
	}
	return 0;
}
