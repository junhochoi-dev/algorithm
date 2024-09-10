#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int T; cin >> T;
    loop(i, T){
        int P, Q; cin >> P >> Q;
        cout << "Case #" << i + 1 << ": ";
        if(P == 1 || P == 2) {
            cout << 1 % Q << endl;
            continue;
        }
        ll dp[3]; P -= 2;
        dp[0] = dp[1] = 1;
        while(P--){
            dp[2] = (dp[0] + dp[1]) % Q;
            dp[0] = dp[1]; dp[1] = dp[2];
        }
        cout << dp[2] << endl;
    }
    return 0;
}