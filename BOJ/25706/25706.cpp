#include <iostream>
#include <algorithm>

#include <vector>

using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

int main() {
    fastio;
    int sz, val;
    cin >> sz;
    vector<int> vc(sz), dp(sz, 1);
    for(int n = 0 ; n < sz ; n++) cin >> vc[n];
    for(int n = sz - 1 - 1 ; n >= 0 ; n--){
        if(n + vc[n] + 1 < sz) dp[n] = dp[n + vc[n] + 1] + 1;
    }
    for(int n = 0 ; n < sz ; n++) cout << dp[n] << ' ';
    return 0;
}