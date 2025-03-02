#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N;
    ll ans = 0, prev;
    cin >> N >> prev; N--;
    while (N--) {
        ll x; cin >> x;
        ans += (x - prev) * (x - prev);
        prev = x;
    }
    cout << ans;
    return 0;
}