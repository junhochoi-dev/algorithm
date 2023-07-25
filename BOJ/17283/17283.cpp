#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int L, R, sum = 0, n = 1;
	cin >> L >> R;
	while (true) {
		L = L * R / 100;
		if (L <= 5)
			break;
		sum += L * pow(2, n++);
	}
	cout << sum << endl;
	return 0;
}