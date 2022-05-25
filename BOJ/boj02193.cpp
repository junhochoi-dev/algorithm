#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
#define endl '\n'
unsigned long long dp[91];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int size;
	cin >> size;
	dp[1] = dp[2] = 1;
	for(int n = 3; n <= size; n++) dp[n] = dp[n - 1] + dp[n - 2];
	cout << dp[size] << endl;
	return 0;
}