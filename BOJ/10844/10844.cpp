#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
#define endl '\n'
#define MOD 1000000000
unsigned long long dp[10001][10];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int size;
	unsigned long long ans = 0;
	cin >> size;
	dp[1][0] = 0;
	for(int n = 1; n <= 9; n++) dp[1][n] = 1;
	for(int n = 2; n <= size; n++){
	    for(int m = 0; m <= 9; m++){
	        if(m >= 1 && m <= 8){
	            dp[n][m] += dp[n - 1][m - 1] + dp[n - 1][m + 1];
	            dp[n][m] %= MOD;
	        }
	        if(m == 0){
	            dp[n][m] += dp[n - 1][m + 1];
	            dp[n][m] %= MOD;
	        }
	        if(m == 9){
	            dp[n][m] += dp[n - 1][m - 1];
	            dp[n][m] %= MOD;
	        }
	    }
	}
	for(int n = 0; n <= 9; n++){
	    ans += dp[size][n];
	    ans %= MOD;
	}
	cout << ans << endl;
	return 0;
}