#include <iostream>
#include <algorithm>
#define endl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int size, dp[501][501], ans = 0;
    cin >> size;
    for(int n = 1 ; n <= size ; n++) for(int m = 1 ; m <= n ; m++) cin >> dp[n][m];
    if(size == 1) {
        cout << dp[1][1] << endl;
        return 0;
    }
    for(int n = 2 ; n <= size ; n++) for(int m = 1 ; m <= n ; m++){
        if(m == 1) dp[n][m] += dp[n - 1][m];
        else if(m == n) dp[n][m] += dp[n - 1][m - 1];
        else dp[n][m] += max(dp[n - 1][m - 1], dp[n - 1][m]);
    }
    cout << *max_element(dp[size] + 1, dp[size] + size + 1) << endl;
    return 0;
}