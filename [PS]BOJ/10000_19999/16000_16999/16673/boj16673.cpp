#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int C, K, P, sum = 0;
	cin >> C >> K >> P;
	for (int n = 0; n <= C; n++) {
		sum += K * n + P * pow(n, 2);
	}
	cout << sum << endl;
	return 0;
}