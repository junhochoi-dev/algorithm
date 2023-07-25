#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define endl '\n'
int fibo_recursion(int n){
	if(n == 1 || n == 2) return 1;
	else return (fibo_recursion(n-1) + fibo_recursion(n-2));
}
int fibo_dp(int n){
	int dp[41], cnt = 0;
	dp[1] = dp[2] = 1;
	for(int m = 3 ; m <= n ; m++){
		cnt++;
		dp[m] = dp[m-1] + dp[m-2];
	}
	return cnt;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// freopen("input.txt", "r", stdin);
	int num;
	cin >> num;
	cout << fibo_recursion(num) << ' ' << fibo_dp(num) << endl;
    return 0;
}