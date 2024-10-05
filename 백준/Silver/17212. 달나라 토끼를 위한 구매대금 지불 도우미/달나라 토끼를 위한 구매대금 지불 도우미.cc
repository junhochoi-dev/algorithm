#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N; cin >> N;
    int dp[100000 + 1];
    loop(i, 100000 + 1) dp[i] = i;
    for(int i = 2; i <= N; i++){
        dp[i] = dp[i - 1] + 1;
        if(i >= 2) dp[i] = min(dp[i], dp[i - 2] + 1);
        if(i >= 5) dp[i] = min(dp[i], dp[i - 5] + 1);
        if(i >= 7) dp[i] = min(dp[i], dp[i - 7] + 1);
    }
    cout << dp[N] << endl;
    return 0;
}