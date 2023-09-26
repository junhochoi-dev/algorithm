#include <iostream>
using namespace std;
unsigned long long dp[1000000];
int main() {
	dp[0] = 0;
	dp[1] = dp[2] = 1;
	int x;
	cin >> x;
	for (int n = 3; n <= x; n++) {
		dp[n] = dp[n - 1] + dp[n - 2];
		dp[n] %= 1000000007;
	}
	cout << dp[x] << endl;
	return 0;
}