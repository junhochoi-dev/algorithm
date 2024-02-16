#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int W[10], K[10];
	for (int n = 0; n < 10; n++)
		cin >> W[n];
	for (int n = 0; n < 10; n++)
		cin >> K[n];
	sort(W, W + 10);
	sort(K, K + 10);
	cout << W[9] + W[8] + W[7] << ' ' << K[9] + K[8] + K[7] << endl;
	return 0;
}