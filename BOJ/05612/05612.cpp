#include <iostream>
using namespace std;
int main() {
	int size, in, out, now, max = 0;
	bool check = false;
	cin >> size >> now;
	max = now;
	for (int n = 0; n < size; n++) {
		cin >> in >> out;
		now += in - out;
		if (max < now)
			max = now;
		if (now < 0)
			check = true;
	}
	if (check)
		cout << 0 << endl;
	else
		cout << max << endl;
	return 0;
}