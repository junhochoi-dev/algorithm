#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int W, N, P, ans = 0; cin >> W >> N >> P;
    while(P--){
        int x; cin >> x;
        if(W <= x && x <= N) ans++;
    }
    cout << ans;
    return 0;
}