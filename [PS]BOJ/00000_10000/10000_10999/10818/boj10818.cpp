#include <iostream>
using namespace std;
int main() {
	int count, min = 1000000, max = -1000000;
	int num;
	cin >> count;
	for (int n = 0; n < count; n++) {
		cin >> num;
		if (min > num)
			min = num;
		if (max < num)
			max = num;
	}
	cout << min << ' ' << max << endl;
	return 0;
}