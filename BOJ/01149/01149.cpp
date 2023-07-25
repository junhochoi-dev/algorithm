#include <iostream>
#include <algorithm>
#define endl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, house[1000][3], dp[1000][3];
    cin >> N;
    for(int n = 0 ; n < N ; n++) for(int m = 0 ; m < 3 ; m++){
        cin >> house[n][m];
        dp[n][m] = 0;
    }
    for(int n = 0 ; n < 3 ; n++) dp[0][n] = house[0][n];
    for(int n = 1 ; n < N ; n++){
        dp[n][0] = min(dp[n - 1][1], dp[n - 1][2]) + house[n][0];
        dp[n][1] = min(dp[n - 1][0], dp[n - 1][2]) + house[n][1];
        dp[n][2] = min(dp[n - 1][0], dp[n - 1][1]) + house[n][2];
    }
    cout << min(dp[N - 1][0], min(dp[N - 1][1], dp[N - 1][2])) << endl;
    return 0;
}