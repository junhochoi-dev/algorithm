#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N; cin >> N;
    int dp[25];
    loop(i, N + 1) dp[i] = 0;
    dp[1] = 1; dp[2] = 1; dp[3] = 1;
    loop(i, N + 1){
        if(i >= 1) dp[i] += dp[i - 1];
        if(i >= 2) dp[i] += dp[i - 2];
        if(i >= 3) dp[i] += dp[i - 3];
    }
    cout << dp[N] << endl;
    return 0;
}
