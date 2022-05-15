#include <iostream>
#include <queue>
#include <vector>
using namespace std;
/*
int fibonacci(int n) { // 호출
	if (n < 2) {
		return n;
	}
	return fibonacci(n - 2) + fibonacci(n - 1);
}
*/
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int dp[51], val;
	dp[0] = dp[1] = 1;
	cin >> val;
	for (int n = 2; n <= val; n++) {
		dp[n] = (dp[n - 1] + dp[n - 2] + 1) % 1000000007;
	}
	cout << dp[val] << endl;
	return 0;
}
