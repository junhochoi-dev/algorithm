#include <iostream>
using namespace std;
int main() {
	cout << fixed;
	cout.precision(1);

	int semester, count, C_sum;
	double sum, C, G;

	cin >> semester;
	for (int n = 0; n < semester; n++) {
		C_sum = sum = 0;
		cin >> count;
		for (int m = 0; m < count; m++) {
			cin >> C >> G;
			sum += C * G;
			C_sum += C;
		}
		cout << C_sum << ' ' << sum / C_sum << endl;
	}
	return 0;
}