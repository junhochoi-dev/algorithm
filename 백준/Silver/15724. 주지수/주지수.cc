#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int dp[1024 + 1][1024 + 1];
int main() {
    fastio
    int N, M; cin >> N >> M;
    loop(i, N) loop(j, M) {
        cin >> dp[i + 1][j + 1];
        dp[i + 1][j + 1] += dp[i][j + 1];
        dp[i + 1][j + 1] += dp[i + 1][j];
        dp[i + 1][j + 1] -= dp[i][j];
    }
    int K; cin >> K;
    while(K--){
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        cout << dp[x2][y2] + dp[x1 - 1][y1 - 1] - dp[x2][y1 - 1] - dp[x1 - 1][y2] << endl;
    }
    return 0;
}