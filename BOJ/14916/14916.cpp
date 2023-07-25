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
    int money, dp[100001];
    dp[0] = dp[1] = dp[3] = -1;
    dp[2] = dp[5] = 1;
    dp[4] = 2;
    cin >> money;
    for(int n = 6 ; n <= money ; n++){
        if(dp[n - 2] == -1 && dp[n - 5] == -1) dp[n] = -1;
        else{
            if(dp[n - 2] == -1) dp[n] = dp[n - 5] + 1;
            else if(dp[n - 5] == -1) dp[n] = dp[n - 2] + 1;
            else dp[n] = min(dp[n - 2], dp[n - 5]) + 1;
        }
    }
    cout << dp[money] << endl;
    return 0;
}