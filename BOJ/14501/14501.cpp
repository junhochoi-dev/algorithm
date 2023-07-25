#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main() {
    fastio;
    int N, day, price;
    vector<pair<int, int>> vec;
    int dp[15] = {0, };
    cin >> N;
    for(int n = 0 ; n < N ; n++){
    	cin >> day >> price;
    	vec.push_back({day, price});
	}
	for(int n = N - 1 ; n >= 0 ; n--){
		if(n + vec[n].first > N) dp[n] = dp[n + 1];
		else dp[n] = max(dp[n+vec[n].first] + vec[n].second, dp[n + 1]);
	}
	cout << dp[0] << endl;
	return 0;
}