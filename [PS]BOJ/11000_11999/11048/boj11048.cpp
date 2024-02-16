#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <map>
#include <set>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'
int main() {
    fastio
    int N, M;
    int arr[1000][1000];
    int dp[1000][1000];
    cin >> N >> M;
    loop(n, N) loop(m, M) {
        cin >> arr[n][m];
        dp[n][m] = arr[n][m];
    }
    loop(n, N) loop(m, M){
        if(n == 0 && m == 0) continue;
        if(n == 0) dp[n][m] += dp[n][m - 1];
        else if(m == 0) dp[n][m] += dp[n - 1][m];
        else dp[n][m] += max(dp[n - 1][m], dp[n][m - 1]);
    }
    cout << dp[N - 1][M - 1] << endl;
    return 0;
}