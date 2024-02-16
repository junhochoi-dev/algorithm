#include <iostream>
using namespace std;
int main() {
	int fibo[100][2] = { {0, 1} , {1, 1} };
	int count, num;
	cin >> count;
	for (int n = 0; n < count; n++) {
		cin >> num;
		if (num == 0)
			cout << 1 << ' ' << 0 << endl;
		else {
			for (int m = 2; m < num; m++) {
				fibo[m][0] = fibo[m - 1][1];
				fibo[m][1] = fibo[m - 1][0] + fibo[m - 1][1];
			}
			cout << fibo[num - 1][0] << ' ' << fibo[num - 1][1] << endl;
		}
	}
	return 0;
}
