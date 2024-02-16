#include <iostream>
#include <algorithm>
#define endl '\n'
using namespace std;
int stair[301], dp[301];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int size;
    cin >> size;
    for(int n = 0 ; n < size ; n++) { cin >> stair[n]; dp[n] = 0; }
    dp[0] = stair[0];
    dp[1] = max(dp[0] + stair[1], stair[1]);
    dp[2] = max(stair[0], stair[1]) + stair[2];
    for(int n = 3 ; n < size ; n++) dp[n] = max(dp[n - 3] + stair[n - 1], dp[n - 2]) + stair[n];
    cout << dp[size - 1] << endl;
    return 0;
}