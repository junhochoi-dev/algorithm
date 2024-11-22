#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int T; cin >> T;
    while(T--){
        int N, ans = 0; cin >> N;
        int cnt[9] = {0,};
        while(N--){
            int x, y; cin >> x >> y;
            cnt[y]++;
        }
        loop(i, 8) ans = max(ans, cnt[i + 1]);
        cout << ans << endl;
    }
    return 0;
}