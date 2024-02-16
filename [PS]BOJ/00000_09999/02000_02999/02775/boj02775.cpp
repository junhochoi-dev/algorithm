#include <iostream>
using namespace std;
int apartment[15][14] = { 0 };
int main() {
	int sum = 0;
	for (int n = 0; n < 15; n++)
		apartment[0][n] = n + 1;
	for (int n = 1; n < 15; n++) {
		for (int m = 0; m < 14; m++) {
			sum = 0;
			for (int i = 0; i <= m; i++) {
				sum += apartment[n - 1][i];
			}
			apartment[n][m] = sum;
		}
	}
	int test_case, k , N;
	cin >> test_case;
	for (int n = 0; n < test_case; n++) {
		cin >> k >> N;
		cout << apartment[k][N - 1] << endl;
	}
	return 0;
}