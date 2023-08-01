#include <iostream>
using namespace std;
int main() {
	int in, out, now = 0, max = 0;
	for (int n = 0; n < 4; n++) {
		cin >> in >> out;
		now -= in;
		now += out;
		if (max < now)
			max = now;
	}
	cout << max << endl;
	return 0;
}